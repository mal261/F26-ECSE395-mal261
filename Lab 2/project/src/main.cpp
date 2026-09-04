#include <Arduino.h>
// This is required in PlatformIO but hidden in the standard Arduino IDE.

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // mal261: initialize baud rate to 115200
  Serial.begin(115200); // Start the Serial connection
}

void loop() {
  // mal261: print out "Hello, Bro" to serial output
  Serial.println("Hello, Bro"); // Print the words to the Serial Monitor.
  
  // mal261: set LED delay to 0.5 seconds
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(500); // Speed in milliseconds
  digitalWrite(LED_PIN, LOW); // LED Off
  delay(500); // Speed in milliseconds
}
