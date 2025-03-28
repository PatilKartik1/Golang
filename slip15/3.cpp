+---------------+                 +------------+
| IR Sensor    | -----> (Digital) | Arduino Uno | ------> (Digital) | LED 1 |
| (Obstacle)   |                 |            | ------> (Digital) | LED 2 |
+---------------+                 +------------+
                                       |
                                       v
                               (USB Power / Battery)


//
//Connections:

IR Sensor:
VCC → 5V (Arduino)
GND → GND (Arduino)
OUT → Digital Pin 2 (Arduino)

LED 1 and LED 2:
Positive terminals → Digital Pins 3 & 4 (Arduino)
Negative terminals → GND (via resistors)

//cpp

#define LED1 3
#define LED2 4

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

void loop() {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    delay(1000);  // Wait 1 second

    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    delay(1000);  // Wait 1 second
}
