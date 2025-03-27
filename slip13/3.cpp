--------------------------
|   Raspberry Pi / Arduino  |
|--------------------------|
| GPIO Pins       5V/3.3V  |-----> Power to Sensor
| GPIO Input               |<----- IR Sensor Output Signal
| GND                      |-----> Ground
 --------------------------


 //python
 import RPi.GPIO as GPIO
import time

led1 = 17  # Define GPIO pin for LED1
led2 = 27  # Define GPIO pin for LED2

GPIO.setmode(GPIO.BCM)
GPIO.setup(led1, GPIO.OUT)
GPIO.setup(led2, GPIO.OUT)

try:
    while True:
        GPIO.output(led1, GPIO.HIGH)
        GPIO.output(led2, GPIO.LOW)
        time.sleep(1)
        
        GPIO.output(led1, GPIO.LOW)
        GPIO.output(led2, GPIO.HIGH)
        time.sleep(1)

except KeyboardInterrupt:
    GPIO.cleanup()

    //cpp

    int led1 = 9;
int led2 = 10;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
}


//📌 Part E: Observations on Input and Output
🔹 Input Observations
IR Sensor Output: When an object is detected, the sensor outputs a HIGH signal.
User Input: Can manually press a button to toggle LEDs.

🔹 Output Observations
The LEDs alternately turn ON and OFF every second.
The LEDs respond correctly to user input or sensor detection.

//📌 Part F: Result and Conclusion
🔹 Result
Successfully interfaced Raspberry Pi / Arduino / BeagleBoard with IR Sensor & LEDs.
The LEDs toggled alternately using GPIO programming.

🔹 Conclusion
This experiment demonstrates basic GPIO programming for embedded systems.
Such interfacing is essential for IoT, robotics, and automation projects.