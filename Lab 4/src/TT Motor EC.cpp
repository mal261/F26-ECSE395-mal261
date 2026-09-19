#include <Arduino.h>

const int MOTOR_B_1A = A1; // (mal261) motor
const int MOTOR_B_1B = A0; // Replace 0 with your pin number

// (mal261) motor state machine values
#define MOTOR_STATE_INCREASING	0
#define MOTOR_STATE_DECREASING	1

int motor_state;

int motor_speed;

void setup() {
  // (mal261) set pins to output
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT);  

  // (mal261) initialize pins to 0
  analogWrite(MOTOR_B_1A, 0);  
  analogWrite(MOTOR_B_1B, 0);

  // (mal261) start out decreasing
  motor_state = MOTOR_STATE_DECREASING;
  motor_speed = 255;
}

void loop() {
  // (mal261) calculate new motor speed based on state
  switch (motor_state) {
    case MOTOR_STATE_INCREASING:
	  motor_speed += 4;
	  break;
	case MOTOR_STATE_DECREASING:
	default:
	  motor_speed -= 4;
	  break;
  }

  // (mal261) determine new state based on motor speed
  if (motor_speed <= 120) {
	  motor_speed = 120;
	  motor_state = MOTOR_STATE_INCREASING;
  }
  else if (motor_speed >= 255) {
	  motor_speed = 255;
	  motor_state = MOTOR_STATE_DECREASING;
  }

  // (mal261) write to motor pins
  analogWrite(MOTOR_B_1A, motor_speed);
  analogWrite(MOTOR_B_1B, 0);

  Serial.println(motor_speed);

  delay(100);
}
