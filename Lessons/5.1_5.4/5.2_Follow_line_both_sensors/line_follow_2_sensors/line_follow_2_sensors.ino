/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 10/21/14

Program: Using both of the light sensors, follow a line

IMPORTANT NOTE:
This example program, in order to maintain compatibility with all the boebots, does not take any specific line sensor values. 
The integers whiteValLeft and whiteValRight need to be set with your BoeBot's values.
Simply replace the 0's with your values
*/

#include <Servo.h>

Servo left;  
Servo right;  //creates two servo objects

int leftLight = 0;
int rightLight = 1;

int leftVal = 0;
int rightVal = 0;

int whiteValLeft = 0; //IMPORTANT - Add your white values here
int whiteValRight = 0;

int forw = 1540;
int rev = 1460;
int zero = 1500;

int changeVal = 150;

void readSensors(){
  leftVal = analogRead(leftLight);
  rightVal = analogRead(rightLight);
}
boolean isLeftLine(){
  boolean isLeft;
  if(leftVal >= (whiteValLeft + changeVal)){
    isLeft = true;
  }
  else{
    isLeft = false;
  }
  return isLeft;
}
boolean isRightLine(){
  boolean isRight;
  if(rightVal >= (whiteValRight + changeVal)){
    isRight = true;
  }
  else{
    isRight = false;
  }
  return isRight;
}

void setup(){ //setup runs just once
  left.attach(10);
  right.attach(9); //mounts each servo on their respective digital pin
}
void loop(){ //loop runs over and over again
  readSensors();
  if(isRightLine()){
    left.writeMicroseconds(forw);
    right.writeMicroseconds(forw);
  }
  else if(isLeftLine()){
    left.writeMicroseconds(rev);
    right.writeMicroseconds(rev);
  }
  else{
    left.writeMicroseconds(forw);
    right.writeMicroseconds(rev);
  }
}


