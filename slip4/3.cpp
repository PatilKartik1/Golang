+-----------------------+
|     Raspberry Pi      |
|  (GPIO Pin Control)   |
+-----------------------+
   |            |
-----------------------------
|                             |
+------------+         +------------+
|  LED 1     |         |   LED 2    |
| GPIO 17    |         | GPIO 27    |
+------------+         +------------+
 |
+----------------+
|  IR Sensor    |
|  GPIO 22      |
+----------------+


//Pin Connections

Component	 Raspberry Pi Pin
LED 1	      GPIO 17
LED 2	       GPIO 27
IR Sensor	  GPIO 22
VCC	          3.3V / 5V
GND         	GND

//Python Code

import RPi.GPIO as GPIO
import time

# Define GPIO pins
LED1 = 17
LED2 = 27

# Setup
GPIO.setmode(GPIO.BCM)
GPIO.setup(LED1, GPIO.OUT)
GPIO.setup(LED2, GPIO.OUT)

try:
    while True:
        GPIO.output(LED1, GPIO.HIGH)
        GPIO.output(LED2, GPIO.LOW)
        time.sleep(1)  # 1 second delay
        GPIO.output(LED1, GPIO.LOW)
        GPIO.output(LED2, GPIO.HIGH)
        time.sleep(1)  # 1 second delay
except KeyboardInterrupt:
    GPIO.cleanup()  # Cleanup on exit

    //C Code

    int led1 = 8; // LED 1 connected to pin 8
    int led2 = 9; // LED 2 connected to pin 9
    
    void setup() {
      pinMode(led1, OUTPUT);
      pinMode(led2, OUTPUT);
    }
    
    void loop() {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      delay(1000); // 1 second delay
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      delay(1000); // 1 second delay
    }

    
    //c. Observations on Input and Output
    Input Observations
    The GPIO pins of Raspberry Pi/Arduino control the LEDs.
    The IR sensor input (if used) detects an object and triggers LED toggling.
    The delay function ensures LEDs alternate every 1 second.
    
    Output Observations
    LED 1 and LED 2 toggle alternately every second.
    If an IR sensor is used, LED toggling can start when an object is detected.
    The LEDs continue toggling until the program stops.
    
    //d. Result and Conclusion
    Result
    Successfully interfaced Raspberry Pi/Arduino with two LEDs and an optional IR sensor.
    The LEDs toggled alternately based on the programmed logic.
    The input from the IR sensor correctly triggered LED control.
    
    Conclusion
    This experiment demonstrates GPIO programming for embedded systems.
    Controlling multiple outputs (LEDs) via microcontrollers is a key concept in automation.
    This is useful in IoT, robotics, and smart device development.