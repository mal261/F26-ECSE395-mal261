/*
#include <Arduino.h>

// (mal261) motor values connected to pins A1 and A0
const int MOTOR_B_1A = A1;
const int MOTOR_B_1B = A0; 

void setup() {
  // (mal261) initialize serial port
  Serial.begin(115200);

  // (mal261) set motor pins
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT); 

  Serial.println("begin motor");
}

void loop() {
  // (mal261) rotate clockwise for 5 seconds
  Serial.println("clockwise");
  
  digitalWrite(MOTOR_B_1A, 255);
  digitalWrite(MOTOR_B_1B, 0);
  
  delay(5000);
  
  // (mal261) stop motor for 2 seconds
  Serial.println("stop");

  digitalWrite(MOTOR_B_1A, 0);
  digitalWrite(MOTOR_B_1B, 0);

  delay(2000);
  
  // (mal261) rotate counter-clockwise for 5 seconds
  Serial.println("counter-clockwise");

  digitalWrite(MOTOR_B_1A, 0);
  digitalWrite(MOTOR_B_1B, 255);

  delay(5000);
  
  // (mal261) stop motor for 2 seconds
  Serial.println("stop");

  digitalWrite(MOTOR_B_1A, 0);
  digitalWrite(MOTOR_B_1B, 0);

  delay(2000);
}
*/
