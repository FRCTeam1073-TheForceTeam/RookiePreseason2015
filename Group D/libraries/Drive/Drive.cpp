
#include "Arduino.h"
#include "Drive.h"


private Servo* meme = new Servo();
private Servo* meme1 = new Servo();
Drive::Drive(int leftPin, int rightPin) 
{
	
	left = leftPin;
	right = rightPin;
	meme.attach(leftPin);
	meme1.attach(rightPin);
}

// ToDo: implement turning

void Drive::move(int percentPower, int turnDir = 0){
  // Your code here
}

void Drive::fwd(int percentPower)
{
	meme.write(90 + (90 * (percentPower / 100)));
	meme1.write(90 - (90 * (percentPower / 100)));	
}

void Drive::rev(int percentPower){
  // Your code here
}

void Drive::turnLeft(int turnRate, int turnMs){
  // Your code here
}

void Drive::turnRight(int turnRate, int turnMs){
  // Your code here
}

void Drive::stop(){
  // Your code here
}
