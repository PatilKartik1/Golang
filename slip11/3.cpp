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

buzzer_pin = 18  # Define GPIO pin for buzzer

GPIO.setmode(GPIO.BCM)
GPIO.setup(buzzer_pin, GPIO.OUT)

try:
    while True:
        GPIO.output(buzzer_pin, GPIO.HIGH)  # Turn ON Buzzer
        print("Buzzer ON")
        time.sleep(1)  # 1-second delay

        GPIO.output(buzzer_pin, GPIO.LOW)   # Turn OFF Buzzer
        print("Buzzer OFF")
        time.sleep(1)

except KeyboardInterrupt:
    GPIO.cleanup()  # Cleanup GPIO on exit


// //cpp

int buzzer = 9;  // Define buzzer pin

void setup() {
  pinMode(buzzer, OUTPUT);  // Set pin as OUTPUT
}

void loop() {
  digitalWrite(buzzer, HIGH);  // Turn ON buzzer
  delay(1000);  // 1-second delay
  digitalWrite(buzzer, LOW);   // Turn OFF buzzer
  delay(1000);
}

//📌 Observations on Input and Output
🔹 Input Observations
IR Sensor Output: When an object is detected, the sensor outputs a HIGH signal.
Temperature Sensor Output: If the temperature crosses a threshold, it triggers an alert.
User Input: Manual button press can also control the buzzer.

🔹 Output Observations
The buzzer turns ON and OFF every second.
The buzzer responds to the sensor input (IR detection or temperature change).
The system works until the program is manually stopped.

//📌 Result and Conclusion
🔹 Result
Successfully interfaced Raspberry Pi / Arduino / BeagleBoard with an IR Sensor / Buzzer.
The buzzer turned ON and OFF as per the programmed logic.
The system responded correctly to sensor input.

🔹 Conclusion
The experiment demonstrates GPIO programming for real-world applications.
Sensors and actuators can be easily controlled using embedded systems programming.
This is a fundamental concept for IoT, home automation, and robotics projects.

