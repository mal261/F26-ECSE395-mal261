#include <Arduino.h>

const int sensorPin = 26;
const int ledPin = 13;

// (mal261) storing sensor state & previous sensor state
bool sensorTouched = 0;
bool prevSensorTouched = 0;

void setup() {
	pinMode(ledPin, OUTPUT);
	pinMode(sensorPin, INPUT);
	Serial.begin(115200);
}

void loop() {
	prevSensorTouched = sensorTouched;
	sensorTouched = analogRead(sensorPin) == 4095;

	// (mal261) changing states from not touched to touched
	if (sensorTouched && !prevSensorTouched) {
		Serial.println("Touch detected!");
		// (mal261) turn board LED on
		digitalWrite(ledPin, HIGH);
	}

	// (mal261) changing states touched to not touched
	else if (!sensorTouched && prevSensorTouched) {
		Serial.println("No touch detected...");
		// (mal261) turn board LED off
		digitalWrite(ledPin, LOW);
	}
}
