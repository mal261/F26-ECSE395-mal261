/*
#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = A1;
const int MOTOR_B_1B = A0; 

void setup() {
  // (mal261) initialize serial port
  Serial.begin(115200);

  // (mal261) set motor pins
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT); 

  // Serial.println("_____");
}

void loop() {
  Serial.println("clockwise");
  
  // (mal261) rotate clockwise
  digitalWrite(MOTOR_B_1A, 255);
  digitalWrite(MOTOR_B_1B, 0);
  
  // (mal261) rotate for 5 seconds
  delay(5000);

  // (mal261) stop rotating
  Serial.println("stop");
  
  // (mal261) stop motor
  digitalWrite(MOTOR_B_1A, 0);
  digitalWrite(MOTOR_B_1B, 0);

  // (mal261) stop for 2 seconds
  delay(2000);

  Serial.println("counter-clockwise");
  
  // (mal261) rotate counter-clockwise
  digitalWrite(MOTOR_B_1A, 0);
  digitalWrite(MOTOR_B_1B, 255);

  // (mal261) rotate for 5 seconds
  delay(5000);

  // (mal261) stop rotating
  Serial.println("stop");
  
  // (mal261) stop motor
  digitalWrite(MOTOR_B_1A, 0);
  digitalWrite(MOTOR_B_1B, 0);

  // (mal261) stop for 2 seconds
  delay(2000);
}


// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment.
*/
