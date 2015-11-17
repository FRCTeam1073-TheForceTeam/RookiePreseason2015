
#include "Led.h"

Led::Led(int pin, int delay) 
{
	pinMode(pin, OUTPUT);
  this->ledPin=pin;
  this->blinkDelay=delay;
}

void Led::turnOn() 
{
	digitalWrite(ledPin, HIGH);
}

void Led::turnOff() 
{
	digitalWrite(ledPin, LOW);
}

void Led::turnOnDim(int brightness) {
	// Your code here
}


void Led::cycle(int count, int dutyCycle) {
	// Your code here
}

void Led::rampUp(int steps, int delayMs) {
	// Your code here
}

void Led::rampDown(int steps, int delayMs) {
	// Your code here
}
