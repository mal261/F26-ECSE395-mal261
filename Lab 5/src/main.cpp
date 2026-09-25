#include <Arduino.h>

const int PAD_PIN	= A0;
const int BUZZER_PIN = A1;

void setup() {
	pinMode(PAD_PIN, INPUT);
	pinMode(BUZZER_PIN, OUTPUT);

	Serial.begin(115200);
}

#define BUZZER_MAX	500

bool pad_previous_hit = false;
bool pad_current_hit = false;

bool drum_hit = false;

#define MAX_ROUNDS	300
int i = MAX_ROUNDS;

void loop() {
	// (mal261) check condition of pad hit
	pad_previous_hit = pad_current_hit;
	pad_current_hit = analogRead(PAD_PIN) != 0;

	// (mal261) check for signal edge of pad to simulate a drum hit
	drum_hit = !pad_previous_hit && pad_current_hit;

	if (drum_hit) {
		Serial.println("drum hit!");
		i = 0;
	}
	
	// (mal261) iterate drum sound on every loop iteration, while drum has been freshly hit
	if (i < MAX_ROUNDS) {
		// (mal261) decay value simulates drum sound decay
		int decayValue = (int)pow(1.2, 47-((double)i/(MAX_ROUNDS/10.0)));
		// (mal261) create random noise to simulate drum sound
		int randomTone = random(0, decayValue);
		tone(BUZZER_PIN, randomTone, 1);
		i++;
	}

	// (mal261) no more drum iterations
	if (i >= MAX_ROUNDS) {
		noTone(BUZZER_PIN);
	}
}
