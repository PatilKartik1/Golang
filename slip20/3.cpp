+----------------+
|  IR Sensor     |
|  (Digital Out) |
+----------------+
        |
        | (Connected to Arduino Digital Pin)
        v
+----------------+
|  Arduino Uno   |
| (Microcontroller) |
+----------------+
    |       |
    |       |
(LED1)      (LED2)
(Digital Pin) (Digital Pin)

IR Sensor detects obstacles and sends a signal to Arduino.
Arduino Uno processes the signal and toggles the two LEDs accordingly.

//cpp code

#define LED1 7  // LED 1 connected to Digital Pin 7
#define LED2 8  // LED 2 connected to Digital Pin 8

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  delay(1000);  // Wait for 1 second

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);  // Wait for 1 second
}

//📝 Explanation:
LED1 is ON and LED2 is OFF for 1 second.
Then LED1 is OFF and LED2 is ON for 1 second.
This repeats indefinitely.


//📌 Observations on Input and Output
🔹 Input:
No manual input is required.
The program runs continuously, toggling LEDs at a fixed interval.

🔹 Output:
LED1 turns ON while LED2 turns OFF for 1 second.
LED1 turns OFF while LED2 turns ON for 1 second.
This cycle repeats continuously.

//📌 Result and Conclusion
✅ Successfully demonstrated interfacing of Arduino/Raspberry Pi with two LEDs and toggling them programmatically.

🔹 Applications:
This concept is used in blinking indicator lights, robotic signaling, and IR-based object detection systems.

