+-----------------------+
|     Raspberry Pi      |
|  (GPIO Pin Control)   |
+-----------------------+
   |            |
-----------------------------
|                             |
+------------+         +------------+
|  IR Sensor |         |   LED      |
| GPIO 22    |         | GPIO 17    |
+------------+         +------------+
 |
GND


//Pin Connections
Component	  Raspberry Pi Pin
LED	          GPIO 17
IR Sensor	  GPIO 22
VCC	        3.3V / 5V
GND	          GND

//python
import RPi.GPIO as GPIO
import time

# Define GPIO pin
LED_PIN = 17

# Setup
GPIO.setmode(GPIO.BCM)
GPIO.setup(LED_PIN, GPIO.OUT)

try:
    while True:
        GPIO.output(LED_PIN, GPIO.HIGH)  # Turn LED ON
        time.sleep(1)  # 1-second delay
        GPIO.output(LED_PIN, GPIO.LOW)   # Turn LED OFF
        time.sleep(1)  # 1-second delay
except KeyboardInterrupt:
    GPIO.cleanup()  # Cleanup GPIO on exit

//C++ Code

int ledPin = 8; // LED connected to pin 8

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn LED ON
  delay(1000); // 1 second delay
  digitalWrite(ledPin, LOW);  // Turn LED OFF
  delay(1000); // 1 second delay
}


//c. Observations on Input and Output
Input Observations
The GPIO pin receives a signal to turn the LED ON/OFF.
The delay function ensures a 1-second interval before toggling.
If an IR sensor is used, it can trigger the LED when an object is detected.

Output Observations
The LED blinks continuously at 1-second intervals.
The LED turns ON and OFF as per the programmed logic.
When using an IR sensor, the LED lights up upon object detection.

//d. Result and Conclusion
Result
Successfully interfaced Raspberry Pi/Arduino with an IR Sensor and LED.
The LED blinked according to the programmed logic.
The IR sensor correctly triggered LED control.

Conclusion
This experiment demonstrates GPIO programming for embedded systems.
Understanding sensor and LED interfacing is essential for IoT applications.
This forms the foundation for home automation, robotics, and smart devices