# ESP8266 Photo Interrupter Sensor Project

#### Project Overview
This project demonstrates how to use an ESP8266 microcontroller to interface with a photo interrupter sensor. The photo interrupter detects the presence of an object by interrupting an infrared light beam, which the ESP8266 reads as a digital signal.

#### Components Needed
- **ESP8266 Microcontroller**
- **Photo Interrupter Sensor**
- **Jumper Wires**

#### Block diagram


#### Circuit Setup
1. **Connecting the Photo Interrupter Sensor to ESP8266:**
   - Connect the digital output pin of the photo interrupter sensor to GPIO pin D1 on the ESP8266.
   - Ensure proper power (VCC) and ground (GND) connections between the ESP8266 and the photo interrupter sensor.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Operation:**
   - After uploading the code, open the Serial Monitor (baud rate: 9600).
   - The Serial Monitor will display whether an object is detected ("Object detected!") or not ("No object detected.").
   - Interrupt the infrared beam of the photo interrupter sensor with an object to observe changes in detection status.

#### Applications
- **Object Counting:** Count items passing through a conveyor belt.
- **Limit Switches:** Use as limit switches in various mechanical systems.
- **Safety Systems:** Detect the presence of objects or people in safety-critical applications.

#### Notes
- **Sensor Output:** The photo interrupter sensor provides a digital signal (`LOW` or `HIGH`) based on whether the beam is interrupted.
- **Delay:** A 500-millisecond delay is added between readings to allow for stable sensor detection.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Photo Interrupter Sensor](https://projectslearner.com/learn/esp8266-photo-interruptor-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner