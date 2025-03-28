+-----------------+
|   Arduino Uno   |
+-----------------+
        |         
-----------------
|     IR Sensor  |
-----------------
        |
        | (Digital Output)
        |
-----------------
|     Buzzer     |
-----------------


//Pin Connections:
Component	      Arduino Pin
IR Sensor OUT	  Digital Pin 2
Buzzer +	        Digital Pin 3
GND                	GND
VCC	                 5V

//cpp

#define buzzer 3  // Buzzer connected to digital pin 3

void setup() {
    pinMode(buzzer, OUTPUT);
}

void loop() {
    digitalWrite(buzzer, HIGH); // Turn ON buzzer
    delay(1000);                // Wait 1 second
    digitalWrite(buzzer, LOW);  // Turn OFF buzzer
    delay(1000);                // Wait 1 second
}

//4. Observations on Input and Output
Input	                   Output
Digital HIGH Signal 	Buzzer Turns ON
Digital LOW Signal	    Buzzer Turns OFF


//5. Result and Conclusion
Successfully interfaced a Buzzer with a Raspberry Pi / Arduino Uno.
The buzzer turns ON and OFF at 1-second intervals.
This experiment demonstrates how to control external devices using GPIO pins.