/*
#include <Arduino.h>

// function prototype
int voltage(float analogvalue);

// (mal261) potentiometer output is passed to gpio26
const int sensorPin = 26;
const int maxSensorValue = 4096;

void setup() {
    Serial.begin(115200);
}

void loop() {
	// (mal261) read potentiometer value
	int sensorValue = analogRead(sensorPin);

	// (mal261) calculate potentiometer voltage
	float sensorVoltage = sensorValue*3.0f/maxSensorValue;

    Serial.println(sensorVoltage);
    delay(75); 
}

// function to calculate output voltage
int voltage(float analogvalue){
    int voltage;
    //analogRead(sensorPin); gives us 0-4095 values
    //use the formula (Analog value*Reference voltage) / (Sensor Resolution) to calculate the output voltage
    return voltage;
}
*/
