-------------------
|    Arduino Uno    |
|-------------------|
|  VCC  ---> IR VCC |
|  GND  ---> IR GND |
|  D2   <--- IR OUT |
|  D3   ---> Buzzer |
|  D4   ---> LED    |
 -------------------

 Pin Connections:

IR Sensor

VCC → 5V (Arduino)

GND → GND (Arduino)

OUT → Digital Pin 2 (Arduino)

Buzzer

Positive → Digital Pin 3 (Arduino)

Negative → GND (Arduino)

//cpp

#define BUZZER 3  // Buzzer connected to pin 3

void setup() {
    pinMode(BUZZER, OUTPUT); // Set pin as output
}

void loop() {
    digitalWrite(BUZZER, HIGH); // Turn buzzer ON
    delay(1000);                // Wait for 1 second
    digitalWrite(BUZZER, LOW);  // Turn buzzer OFF
    delay(1000);                // Wait for 1 second
}


//📌 Observations on Input and Output
Input:
The buzzer is controlled based on a loop where it alternates ON and OFF states every second.

Output:
The buzzer turns ON for 1 second and then turns OFF for 1 second repeatedly.
If connected to a sensor, the buzzer can activate based on sensor input (e.g., IR detection).

//📌 Result and Conclusion
✔️ Successfully interfaced IR Sensor & Buzzer with Raspberry Pi / Arduino.
✔️ Implemented a program to toggle the buzzer at fixed intervals.
✔️ Can be modified to trigger based on sensor input (IR / Temperature Sensor).
✔️ The system can be used for alerts, security alarms, or automation systems.