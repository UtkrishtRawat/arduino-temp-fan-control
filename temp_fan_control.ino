#include "DHT.h"

#define DHTPIN 2       // Sensor pin
#define DHTTYPE DHT11  // Sensor type
#define FAN_PIN 3      // Fan or second LED
#define GREEN_LED 4
#define RED_LED 5

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  pinMode(FAN_PIN, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  Serial.println("Temperature-Controlled Fan System Started");
}

void loop() {
  float temp = dht.readTemperature();

  if (isnan(temp)) {
    Serial.println("Error reading temperature!");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("°C");

  if (temp > 30) {
    digitalWrite(FAN_PIN, HIGH);   // Fan ON
    digitalWrite(RED_LED, HIGH);   // Overheat LED ON
    digitalWrite(GREEN_LED, LOW);
    Serial.println("Status: HOT — Fan ON");
  } else {
    digitalWrite(FAN_PIN, LOW);    // Fan OFF
    digitalWrite(GREEN_LED, HIGH); // Normal LED ON
    digitalWrite(RED_LED, LOW);
    Serial.println("Status: Normal — Fan OFF");
  }

  delay(2000);
}