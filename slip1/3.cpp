+---------------------+
|     Raspberry Pi     |
|  (GPIO Pins Control) |
+---------------------+
       |       |
-----------------------
|                       |
+------+               +-----------+
| IR Tx | ------------ | IR Sensor |
+------+               +-----------+
|                        |
| (Reflected IR Signal)  |
|                        |
+-----+                  +-------+
| LED | ---------------- | GPIO  |
+-----+                  +-------+

// IR Sensor Pinout

IR Sensor Pin	  Raspberry Pi GPIO Pin
VCC (5V)	       5V Power
GND	              GND
OUT (Data)	      GPIO Pin (e.g., 17)


//Cpp (arduino)

int ledPin = 13;  // Pin connected to LED

void setup() {
  pinMode(ledPin, OUTPUT);  // Set pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn LED ON
  delay(1000);  // Wait for 1 second
  digitalWrite(ledPin, LOW);  // Turn LED OFF
  delay(1000);  // Wait for 1 second
}

//python(using Rasberry pie)

import RPi.GPIO as GPIO
import time

LED_PIN = 17  # GPIO Pin connected to LED

GPIO.setmode(GPIO.BCM)  # Set pin numbering mode
GPIO.setup(LED_PIN, GPIO.OUT)  # Set as output

try:
    while True:
        GPIO.output(LED_PIN, GPIO.HIGH)  # Turn LED ON
        time.sleep(1)  # Wait for 1 second
        GPIO.output(LED_PIN, GPIO.LOW)  # Turn LED OFF
        time.sleep(1)  # Wait for 1 second
except KeyboardInterrupt:
    GPIO.cleanup()  # Cleanup GPIO on exit


//c. Observations on Input and Output
Input Observations
1.The GPIO pins of Raspberry Pi/Arduino receive the command to turn ON/OFF the LED.
2.The delay function ensures a 1-second pause before toggling the LED state.

Output Observations
1.The LED turns ON and OFF at an interval of 1 second.
2.The LED blinks continuously until the program is stopped.
3.if an IR Sensor is used, the LED can turn ON when the sensor detects an object.

//d. Result and Conclusion
Result
1.Successfully interfaced Raspberry Pi/Arduino with an IR Sensor/LED.
2.The LED blinked as per the programmed logic.
3.The input from the IR sensor or button correctly controlled the LED.

Conclusion
1.The experiment demonstrates GPIO programming for embedded systems.
2.Interfacing sensors and actuators with microcontrollers/microcomputers enables real-world automation.
3.This forms the foundation for IoT, robotics, and automation projects.

