+---------------------+
|     Arduino Uno     |
|  (Microcontroller)  |
+---------------------+
     |         |          
     |         |          
  [VCC]     [GND]  (Power)
     |         |          
     |      +------------------+
     |      |   IR Sensor      |
     |      +------------------+
     |         |          
 [Digital Pin]          
     |          
  +------------------+
  |       LED        |
  +------------------+
     |
  [GND]     
  IR Sensor: Sends HIGH signal when an object is detected.
  LED: Blinks based on IR sensor detection.


  //cpp

  int LED_PIN = 13; // Pin connected to LED

  void setup() {
      pinMode(LED_PIN, OUTPUT);  // Set LED pin as OUTPUT
  }
  
  void loop() {
      digitalWrite(LED_PIN, HIGH);  // Turn LED ON
      delay(1000);  // Wait for 1 second
      digitalWrite(LED_PIN, LOW);   // Turn LED OFF
      delay(1000);  // Wait for 1 second
  }
  

 // c. Observations on Input and Output
🔹 Input Observations
The GPIO pins of Raspberry Pi / Arduino receive signals to turn ON/OFF the LED.
The IR Sensor sends a HIGH signal when an object is detected.

🔹 Output Observations
The LED blinks at a 1-second interval.
If an IR Sensor is used, the LED turns ON when an object is detected.
If the program is stopped, the LED stays OFF.

//d. Result and Conclusion
🔹 Result
✅ Successfully interfaced Arduino Uno / Raspberry Pi with an IR Sensor and LED.
✅ The LED blinks as per programmed logic.
✅ The IR Sensor detects objects and controls LED accordingly.

🔹 Conclusion
This experiment demonstrates GPIO programming for embedded systems.
Sensors and actuators can be interfaced for real-world automation.
this is a fundamental concept for IoT, robotics, and automation projects.