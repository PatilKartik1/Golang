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
    |  OUT  | ------------ | GPIO (e.g., 17) |
    +-------+              +------------+


//Pin Connections for IR Sensor

IR Sensor Pin	 Raspberry Pi Pin
VCC	                3.3V / 5V
GND	                   GND
OUT	                GPIO17

//python

import RPi.GPIO as GPIO
import time

LED_PIN = 18  # GPIO pin connected to LED

GPIO.setmode(GPIO.BCM)
GPIO.setup(LED_PIN, GPIO.OUT)

try:
    while True:
        GPIO.output(LED_PIN, GPIO.HIGH)  # Turn LED ON
        time.sleep(1)  # Wait 1 second
        GPIO.output(LED_PIN, GPIO.LOW)   # Turn LED OFF
        time.sleep(1)  # Wait 1 second
except KeyboardInterrupt:
    GPIO.cleanup()  # Cleanup GPIO on exit


//cpp

int ledPin = 13; // LED connected to pin 13

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn LED ON
  delay(1000); // Wait 1 second
  digitalWrite(ledPin, LOW); // Turn LED OFF
  delay(1000); // Wait 1 second
}

//c. Observations on Input and Output
Input Observations
The GPIO pin of Raspberry Pi/Arduino receives commands to toggle the LED.
The IR sensor output detects object presence and can trigger LED blinking.
The delay function ensures proper timing for LED blinking.

Output Observations
The LED blinks ON and OFF every second.
When an IR sensor is used, the LED turns ON when an object is detected.
The blinking continues until the program is stopped.

//d. Result and Conclusion
Result
Successfully interfaced Raspberry Pi/Arduino with an IR Sensor and LED.
The LED blinked at regular intervals based on the programmed logic.
The IR sensor controlled the LED state correctly.

Conclusion
This experiment demonstrates GPIO programming for embedded systems.
Interfacing sensors and actuators is essential for automation.
This serves as a foundation for IoT, robotics, and real-world applications.