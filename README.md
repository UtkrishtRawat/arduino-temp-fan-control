![Arduino](https://img.shields.io/badge/Arduino-Uno-blue)
![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)
![Platform](https://img.shields.io/badge/Platform-Embedded%20Systems-orange)

---

## 📌 Project Overview
An Arduino-based **temperature monitoring and fan control system** using the DHT11 sensor.  

- **Temperature > 30°C** → Fan turns **ON** + Red LED lights up.  
- **Temperature ≤ 30°C** → Fan turns **OFF** + Green LED lights up.  

This project is ideal for **IoT, home automation, and embedded systems** portfolios.

---

## 🛠 Components Required
- Arduino Uno / Nano
- DHT11 Temperature Sensor
- 1 Fan module (or LED for simulation)
- 2 LEDs (Green & Red)
- Breadboard & Jumper Wires

---

## 🔌 Circuit Connections
| Component  | Arduino Pin |
|------------|-------------|
| DHT11 Data | 2           |
| Fan        | 3           |
| Green LED  | 4           |
| Red LED    | 5           |

---

## 📄 Arduino Code
You can view the complete Arduino sketch here:  
[**temp_fan_control.ino**](temp_fan_control.ino)



---

## 🚀 How to Run
1. Install **DHT sensor library** in Arduino IDE:  
   - Go to *Sketch → Include Library → Manage Libraries*  
   - Search `"DHT sensor library"` and install.
2. Upload `temp_fan_control.ino` to your Arduino board.
3. Open **Serial Monitor** at `9600 baud`.
4. Observe fan and LEDs responding to temperature changes.



---

## 📜 License
This project is licensed under the **MIT License**.

This project is licensed under the **MIT License**.
