+----------------------------------+
|         Raspberry Pi / Arduino   |
|    +-------------------------+   |
|    | GPIO Pin (Input)        |<--| IR Sensor (OUT)  |
|    | GPIO Pin (Output)       |-->| Buzzer (ON/OFF)  |
|    +-------------------------+   |
+----------------------------------+


//python

import RPi.GPIO as GPIO
import time

BUZZER_PIN = 17  # GPIO pin for Buzzer

GPIO.setmode(GPIO.BCM)  # Use Broadcom pin numbering
GPIO.setup(BUZZER_PIN, GPIO.OUT)  # Set Buzzer pin as output

try:
    while True:
        GPIO.output(BUZZER_PIN, GPIO.HIGH)  # Turn Buzzer ON
        time.sleep(1)  # Wait 1 second
        GPIO.output(BUZZER_PIN, GPIO.LOW)  # Turn Buzzer OFF
        time.sleep(1)  # Wait 1 second
except KeyboardInterrupt:
    GPIO.cleanup()  # Clean up GPIO on Ctrl+C


//cpp

#define BUZZER_PIN 9  // Pin for Buzzer

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);  // Set Buzzer pin as output
}

void loop() {
  digitalWrite(BUZZER_PIN, HIGH);  // Turn Buzzer ON
  delay(1000);  // Wait 1 second
  digitalWrite(BUZZER_PIN, LOW);  // Turn Buzzer OFF
  delay(1000);  // Wait 1 second
}


//🔹 Observations on Input and Output
📥 Input Observations
The GPIO pins of Raspberry Pi / Arduino receive a signal from the IR Sensor.
When an object is detected by the IR Sensor, it sends a HIGH signal.
The microcontroller activates the buzzer based on the IR sensor signal.

📤 Output Observations
The buzzer turns ON and OFF at 1-second intervals (if continuously running).
If an IR Sensor is used, the buzzer turns ON only when an object is detected.
The buzzer continues until the program is stopped.

//🔹 Result and Conclusion
✅ Result
Successfully interfaced Raspberry Pi / Arduino with an IR Sensor & Buzzer.
The buzzer activated as per the programmed logic.
The IR sensor correctly detected objects and triggered the buzzer accordingly.

📌 Conclusion
The experiment demonstrates GPIO programming for embedded systems.
Successfully interfacing sensors & actuators enables real-world automation.
This forms the foundation for IoT, robotics, and security automation projects. 🚀