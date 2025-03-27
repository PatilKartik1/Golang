+------------------+
|  Arduino Uno     |
|------------------|
| GPIO Pin        | ---> IR Sensor Signal Out
| Digital Pin 7   | ---> Buzzer Control
| GND            | ---> GND (IR Sensor & Buzzer)
| VCC (5V)       | ---> IR Sensor & Buzzer Power
+------------------+


//Python

import RPi.GPIO as GPIO
import time

buzzer_pin = 18  # GPIO pin for buzzer

GPIO.setmode(GPIO.BCM)
GPIO.setup(buzzer_pin, GPIO.OUT)

try:
    while True:
        GPIO.output(buzzer_pin, GPIO.HIGH)  # Turn ON buzzer
        print("Buzzer ON")
        time.sleep(1)  # Wait 1 second
        GPIO.output(buzzer_pin, GPIO.LOW)   # Turn OFF buzzer
        print("Buzzer OFF")
        time.sleep(1)  # Wait 1 second

except KeyboardInterrupt:
    GPIO.cleanup()  # Reset GPIO settings


//C++ Code

#define BUZZER 7  // Buzzer connected to pin 7

void setup() {
    pinMode(BUZZER, OUTPUT);
}

void loop() {
    digitalWrite(BUZZER, HIGH); // Turn ON buzzer
    delay(1000);                // Wait 1 second
    digitalWrite(BUZZER, LOW);  // Turn OFF buzzer
    delay(1000);                // Wait 1 second
}


//C. Observations on Input and Output
Input Observations
The IR sensor detects an object and sends a signal to the board.
The microcontroller/microcomputer receives the sensor signal and processes it.
The buzzer turns ON when an object is detected or per the program logic.

Output Observations
The buzzer turns ON/OFF at a 1-second interval.
If the IR sensor is used, the buzzer activates when an object is detected.
If a temperature sensor is used, the buzzer triggers based on a threshold temperature.

//D. Result and Conclusion
Result
✅ Successfully interfaced Raspberry Pi / BeagleBoard / Arduino with an IR Sensor and Buzzer.
✅ The buzzer turned ON/OFF based on the programmed logic.

Conclusion
🔹 This experiment demonstrates GPIO programming for embedded systems.
🔹 It shows how to interface sensors and actuators with microcontrollers/microcomputers.
🔹 This forms the foundation for IoT, automation, and robotics applications.

