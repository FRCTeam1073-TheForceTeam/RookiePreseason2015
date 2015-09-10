/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 10/20/14

Program: Using both of the light sensors, follow a line AND:
1) auto-calibrate (so that the user does not have to change the code)
2) be able to continue moving when both line sensors see a black line
*/

#include <Servo.h>

Servo left;  
Servo right;  //creates two servo objects

int leftLight = 0;
int rightLight = 1;

int leftVal = 0;
int rightVal = 0;

int whiteValLeft = 0; 
int whiteValRight = 0;

int forw = 1540;
int rev = 1460;
int zero = 1500;

int changeVal = 150;

void readSensors(){
  leftVal = analogRead(leftLight);
  rightVal = analogRead(rightLight);
}
void setWhite(){
  whiteValLeft = analogRead(leftLight);
  whiteValRight = analogRead(rightLight);
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
  setWhite();
}
void loop(){ //loop runs over and over again
  readSensors();
  if(isRightLine() && isLeftLine()){
    left.writeMicroseconds(forw);
    right.writeMicroseconds(rev);
  }
  else if(isRightLine()){
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


