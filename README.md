# Arduino Smart Temperature Control System

## 📌 Objective

To monitor temperature using the DHT11 sensor and automatically control a fan and LEDs based on temperature conditions.

---

## 🔧 Components Used

* Arduino Uno
* DHT11 Temperature Sensor
* Red LED
* Green LED
* 220Ω Resistors
* Relay Module (for fan control)
* Jumper wires
* Breadboard

---

## ⚙️ Working Principle

The DHT11 sensor reads the surrounding temperature and sends data to the Arduino.

* If temperature is **below 25°C**:

  * Green LED turns ON
  * Fan remains OFF

* If temperature is **25°C or above**:

  * Red LED turns ON
  * Fan turns ON via relay

The temperature values are also displayed on the Serial Monitor.

---

## 🔌 Circuit Connections

### DHT11 Sensor

* VCC → 5V
* GND → GND
* DATA → Pin 7

### LEDs

* Green LED → Pin 2 (with resistor)
* Red LED → Pin 3 (with resistor)

### Relay Module (Fan)

* IN → Pin 8
* VCC → 5V
* GND → GND

---

## 💻 Code

The Arduino reads temperature using the DHT library and controls LEDs and relay based on a threshold value.

---

## 📊 Output

* Displays real-time temperature in Serial Monitor
* Automatically switches between:

  * Cooling mode (Fan ON, Red LED ON)
  * Normal mode (Fan OFF, Green LED ON)

---

## 🛠️ Tools Used

* Arduino IDE

---

## 📁 Project Structure

arduino-temperature-control/
│── code/
│     └── main.ino
│── circuit/
│     └── circuit.jpg
│── output/
│     └── output.png
│── README.md

---

## 🚀 Future Improvements

* Add LCD display for real-time monitoring
* Integrate IoT (WiFi/Bluetooth) for remote control
* Add humidity-based control
* Use more accurate sensors like DHT22

---

## ✅ Conclusion

This project demonstrates a basic automation system using Arduino, where environmental temperature is used to control electrical devices efficiently.
