#include <Arduino.h>

#include "IS.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
int voltageRead(int pin) {
	int value = analogRead(pin);
	return map(value, 0, 1023, 0, 10000);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void voltageWrite(int pin, int voltage) {
	int value = map(voltage, 0, 10000, 0, 255);
	analogWrite(pin, value);
}