
 🚤 Smart Hybrid Autonomous Boat
 Bluetooth + Voice + Ultrasonic Navigation using Arduino

 📌 Overview

This project demonstrates a smart Arduino-powered autonomous boat capable of operating in three modes:

* Manual Bluetooth control
* Voice command navigation
* Ultrasonic obstacle avoidance

The boat intelligently switches between modes to provide safe and efficient navigation, making it ideal for robotics learning, IoT experimentation, and embedded automation projects.

---

 ⚙ Features

✔ Bluetooth remote control using mobile app
✔ Voice-based navigation commands
✔ Autonomous obstacle detection & avoidance
✔ Hybrid control architecture
✔ Real-time motor response

 🧠 Components Used

* Arduino Uno / Nano
* HC-05 Bluetooth Module
* Ultrasonic Sensor (HC-SR04)
* L298N Motor Driver
* DC Motors + Propeller
* Battery Pack
* Boat chassis

🔌 Pin Configuration

| Module             | Arduino Pin |
| ------------------ | ----------- |
| Ultrasonic Trigger | 9           |
| Ultrasonic Echo    | 10          |
| Motor IN1          | 5           |
| Motor IN2          | 6           |
| Motor IN3          | 7           |
| Motor IN4          | 8           |

 🚀 Working Principle

The ultrasonic sensor continuously scans for obstacles.
If an object is detected within a safe threshold:

→ Boat stops
→ Changes direction automatically

Bluetooth or voice commands override autonomous control for manual navigation.

 📱 App Control

Any Bluetooth controller or voice control app can be used to send commands:

F → Forward
B → Backward
L → Left
R → Right
S → Stop

 🎯 Applications

* Autonomous surface vehicles
* Robotics learning
* Smart navigation systems
* IoT experimentation

 🔮 Future Improvements

* GPS navigation
* AI obstacle prediction
* Solar charging system
* Camera streaming

---👨‍💻 Author

Harshal Sonawane




⭐ If you like this project, star the repository!
