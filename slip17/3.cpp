+----------------------+
|      Arduino Uno     |
|----------------------|
| Digital Pin 2  <-- IR Sensor Output |
| Digital Pin 8  --> LED 1 (Toggle)   |
| Digital Pin 9  --> LED 2 (Toggle)   |
| GND            --> Common Ground    |
| 5V             --> Sensor VCC       |
+----------------------+

//code
#define LED1 8  // Pin for LED1
#define LED2 9  // Pin for LED2

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


//D. Observations on Input and Output
Input Observations:
The GPIO pins receive signals from the Arduino or Raspberry Pi.
The program alternates the state of LED1 and LED2 every second.
The delay function ensures the toggling effect is visible.

Output Observations:
LED 1 turns ON while LED 2 is OFF for one second.
LED 1 turns OFF while LED 2 is ON for the next second.
The process continues until the program is manually stopped.

//E. Result and Conclusion
Result:
Successfully interfaced Arduino/Raspberry Pi with LEDs.
The LEDs toggled alternately with a 1-second delay.

Conclusion:
GPIO programming allows control of external devices.
Timing functions like delay() and sleep() are essential for LED control.
Microcontrollers and microcomputers can be used for real-world automation projects, such as indicators, alarms, and IoT applications.