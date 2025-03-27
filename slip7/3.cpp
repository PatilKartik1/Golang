+-----------------------+
|     Raspberry Pi /    |
|     Arduino Uno       |
|  (GPIO Pin Control)   |
+-----------------------+
          |
          |
-------------------
|                 |
+-------+         +--------+
|  VCC  |         |  Buzzer |
|  GND  |---------|  GPIO   |
+-------+         +--------+


//Pin Connections

Component	 Raspberry Pi Pin	  Arduino Pin
Buzzer VCC	   5V / 3.3V	         5V
Buzzer GND	     GND	                GND
Buzzer Control	 GPIO 18 (PWM)	   Pin 9 (PWM)

//Python Code
import RPi.GPIO as GPIO
import time

buzzer = 18  # Define GPIO pin for buzzer

# GPIO setup
GPIO.setmode(GPIO.BCM)
GPIO.setup(buzzer, GPIO.OUT)

try:
    while True:
        GPIO.output(buzzer, GPIO.HIGH)  # Turn buzzer ON
        time.sleep(1)  # 1-second delay
        GPIO.output(buzzer, GPIO.LOW)   # Turn buzzer OFF
        time.sleep(1)  # 1-second delay

except KeyboardInterrupt:
    GPIO.cleanup()  # Cleanup GPIO on exit


//C++ Code

int buzzer = 9; // Buzzer connected to pin 9

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(buzzer, HIGH); // Turn buzzer ON
  delay(1000); // 1-second delay
  digitalWrite(buzzer, LOW);  // Turn buzzer OFF
  delay(1000); // 1-second delay
}


//c. Observations on Input and Output
Input Observations
The GPIO pin sends HIGH/LOW signals to the buzzer.
A 1-second delay ensures periodic ON/OFF operation.
If an IR sensor or temperature sensor is used, the buzzer activates upon threshold detection.

Output Observations
The buzzer turns ON and OFF at 1-second intervals.
If an IR sensor is used, the buzzer activates when an object is detected.
The output is audible as a beeping sound.

//d. Result and Conclusion
Result
Successfully interfaced Raspberry Pi/Arduino with a Buzzer.
The buzzer toggled ON/OFF as per the programmed logic.
The IR sensor or temperature sensor controlled the buzzer correctly.

//Conclusion
The experiment demonstrates GPIO programming for embedded systems.
Interfacing sensors and actuators enables automation applications.
This setup forms the foundation for IoT, security alarms, and home automation projects.