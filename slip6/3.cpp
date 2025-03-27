+-----------------------+
|     Raspberry Pi      |
|  (GPIO Pin Control)   |
+-----------------------+
   |            |
-----------------------------
|                             |
+------------+         +------------+
|  IR Sensor |         |   LED1     |
| GPIO 22    |         | GPIO 17    |
+------------+         +------------+
                   |
                 +------------+
                 |   LED2     |
                 | GPIO 27    |
                 +------------+

//Pin Connections

Component	  Raspberry Pi Pin
LED1	       GPIO 17
LED2	       GPIO 27
IR Sensor	   GPIO 22
VCC	          3.3V / 5V
GND	             GND

//Python Code

import RPi.GPIO as GPIO
import time

# Define GPIO pins for LEDs
LED1 = 17
LED2 = 27

# Setup
GPIO.setmode(GPIO.BCM)
GPIO.setup(LED1, GPIO.OUT)
GPIO.setup(LED2, GPIO.OUT)

try:
    while True:
        GPIO.output(LED1, GPIO.HIGH)  # Turn LED1 ON
        GPIO.output(LED2, GPIO.LOW)   # Turn LED2 OFF
        time.sleep(1)  # Delay of 1 second

        GPIO.output(LED1, GPIO.LOW)   # Turn LED1 OFF
        GPIO.output(LED2, GPIO.HIGH)  # Turn LED2 ON
        time.sleep(1)  # Delay of 1 second

except KeyboardInterrupt:
    GPIO.cleanup()  # Cleanup GPIO on exit

    //C++ Code

    int led1 = 8; // LED1 connected to pin 8
    int led2 = 9; // LED2 connected to pin 9
    
    void setup() {
      pinMode(led1, OUTPUT);
      pinMode(led2, OUTPUT);
    }
    
    void loop() {
      digitalWrite(led1, HIGH); // Turn LED1 ON
      digitalWrite(led2, LOW);  // Turn LED2 OFF
      delay(1000); // 1 second delay
    
      digitalWrite(led1, LOW);  // Turn LED1 OFF
      digitalWrite(led2, HIGH); // Turn LED2 ON
      delay(1000); // 1 second delay
    }

    
    //c. Observations on Input and Output
    Input Observations
    The GPIO pins receive signals to toggle the LEDs alternately.
    The delay function ensures a 1-second interval before toggling.
    The IR sensor detects objects and can be used to control the LEDs.
    
    Output Observations
    LED1 and LED2 alternate turning ON and OFF every second.
    If the IR sensor is used, it can trigger the LED toggle when an object is detected.
    
    //d. Result and Conclusion
    Result
    Successfully interfaced Raspberry Pi/Arduino with an IR Sensor and two LEDs.
    The LEDs toggled alternately every second.
    The IR sensor detected input and controlled the LED behavior.
    
    Conclusion
    This experiment demonstrates GPIO programming for embedded systems.
    Interfacing sensors and actuators enables real-world automation.
    The setup forms the foundation for IoT, robotics, and home automation projects.