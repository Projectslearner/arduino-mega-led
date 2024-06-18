/*
    Project name : External LED 
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-led
*/

// Define the pin number where the External LED is connected
const int ledPin = 13;

void setup() {
  // Set the External LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the External LED on (HIGH) for 1 second
  digitalWrite(ledPin, HIGH);
  delay(1000);

  
}
