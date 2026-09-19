/*
#include <Arduino.h>

// (mal261) motor values connected to pins A1 and A0
const int MOTOR_B_1A = A1;
const int MOTOR_B_1B = A0;


void setup() {

  // (mal261) set pin mode for motor pins
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT);  

  // (mal261) clockwise spin
  analogWrite(MOTOR_B_1A, 255);
  analogWrite(MOTOR_B_1B, 0);

  delay(1000);

  // (mal261) motor is off
  analogWrite(MOTOR_B_1A, 0);  
  analogWrite(MOTOR_B_1B, 0);
}

void loop() {

}

// Note:
// - Please modify the `analogWrite()`, swap the `analogWrite()`, and modify the `delay()`.
// - You don't have to put anything in the loop.
//      - If you would like to run the code again, please press the `RESET BUTTON` on your ESP32.
*/
