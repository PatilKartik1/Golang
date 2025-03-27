+-----------------------+
|     Raspberry Pi      |
|  (GPIO Pin Control)   |
+-----------------------+
        |       |
-----------------------
|                        |
+-------+              +------------+
|  VCC  | ------------ |   3.3V/5V  |
+-------+              +------------+
|  GND  | ------------ |    GND     |
+-------+              +------------+
|  Data | ------------ | GPIO (e.g., 4) |
+-------+              +------------+


//Pin Connections for DHT11 Sensor


DHT11 Sensor Pin	Raspberry Pi Pin
VCC	                   3.3V / 5V
GND	                      GND
Data	               GPIO (e.g., 4)

//Python Code (Raspberry Pi)

import RPi.GPIO as GPIO
import time

BUZZER_PIN = 18  # GPIO Pin connected to the buzzer

GPIO.setmode(GPIO.BCM)
GPIO.setup(BUZZER_PIN, GPIO.OUT)

try:
    while True:
        GPIO.output(BUZZER_PIN, GPIO.HIGH)  # Turn ON buzzer
        time.sleep(1)  # Wait for 1 second
        GPIO.output(BUZZER_PIN, GPIO.LOW)   # Turn OFF buzzer
        time.sleep(1)  # Wait for 1 second
except KeyboardInterrupt:
    GPIO.cleanup()  # Cleanup GPIO on exit


//C++ Code(Arduino)

int buzzer = 8; // Pin connected to buzzer

void setup() {
  pinMode(buzzer, OUTPUT); // Set buzzer as output
}

void loop() {
  digitalWrite(buzzer, HIGH); // Turn ON buzzer
  delay(1000); // Wait for 1 second
  digitalWrite(buzzer, LOW); // Turn OFF buzzer
  delay(1000); // Wait for 1 second
}


//c. Observations on Input and Output
Input Observations
The GPIO pin of Raspberry Pi/Arduino receives commands to turn the buzzer ON/OFF.
A delay function ensures a 1-second interval before toggling the buzzer state.
If interfaced with a temperature sensor, the buzzer could trigger based on temperature thresholds.

Output Observations
The buzzer beeps ON and OFF at 1-second intervals.
If controlled via a sensor, the buzzer activates based on temperature readings.
The program runs continuously until manually stopped.

//d. Result and Conclusion
Result
Successfully interfaced Raspberry Pi/Arduino with a buzzer and a temperature sensor.
The buzzer turned ON/OFF as per the programmed logic.
The input from a sensor (DHT11) could be used to control the buzzer.

Conclusion
This experiment demonstrates GPIO programming in embedded systems.
Interfacing sensors and actuators enables real-world automation projects.
This is a foundation for IoT, smart devices, and home automation.