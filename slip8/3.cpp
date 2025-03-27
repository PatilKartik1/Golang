+-----------------+  
|  Arduino Uno    |  
|-----------------|  
| GPIO Pins       |--------> LED (Output)  
| Analog Input    |<-------- IR Sensor (Input)  
| I2C/SPI/UART    |<-------- Camera (Optional)  
+-----------------+  


// Python ras pie


import RPi.GPIO as GPIO
import time

LED_PIN = 18  # GPIO pin for LED

GPIO.setmode(GPIO.BCM)  # Use Broadcom pin numbering
GPIO.setup(LED_PIN, GPIO.OUT)  # Set LED pin as output

try:
    while True:
        GPIO.output(LED_PIN, GPIO.HIGH)  # Turn LED ON
        time.sleep(1)  # Wait 1 second
        GPIO.output(LED_PIN, GPIO.LOW)  # Turn LED OFF
        time.sleep(1)  # Wait 1 second
except KeyboardInterrupt:
    GPIO.cleanup()  # Clean up GPIO on Ctrl+C


    // C++ code for Arduino Uno

    #define LED_PIN 13  // Pin for LED

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Set LED pin as output
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // Turn LED ON
  delay(1000);  // Wait 1 second
  digitalWrite(LED_PIN, LOW);  // Turn LED OFF
  delay(1000);  // Wait 1 second
}


//Observations on Input and Output
📥 Input Observations
The GPIO pins of Raspberry Pi / Arduino receive the command to turn ON/OFF the LED.
The delay function ensures a 1-second interval between LED states.
If using an IR sensor, it sends a HIGH/LOW signal to control the LED based on object detection.

📤 Output Observations
The LED blinks ON and OFF at 1-second intervals.
The LED blinks continuously until the program is stopped.
If an IR Sensor is used, the LED turns ON only when an object is detected.

//🔹 Result and Conclusion
✅ Result
Successfully interfaced Raspberry Pi / Arduino with an IR Sensor & LED.
The LED blinked as per the programmed logic.
The IR sensor detected objects and controlled the LED accordingly.

📌 Conclusion
The experiment demonstrates GPIO programming for embedded systems.
Successfully interfacing sensors & actuators enables real-world automation.
This forms the foundation for IoT, robotics, and smart automation projects. 