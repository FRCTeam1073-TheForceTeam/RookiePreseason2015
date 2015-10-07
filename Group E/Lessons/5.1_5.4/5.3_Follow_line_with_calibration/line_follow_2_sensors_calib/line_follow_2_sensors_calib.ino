/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 10/20/14

Program: Using both of the light sensors, follow a line AND:
1) auto-calibrate (so that the user does not have to change the code)
2) be able to continue moving when both line sensors see a black line
*/

#include <Servo.h>
#include <Drive.h>
#include <LineSensor.h>

#define PIN_LINESENSOR_LEFT   0
#define PIN_LINESENSOR_RIGHT  1
#define PIN_SERVO_RIGHT   9
#define PIN_SERVO_LEFT    10

LineSensor *ls;
Drive *drive;

void setup(){ //setup runs just once
  drive = new Drive(PIN_SERVO_LEFT, PIN_SERVO_RIGHT);
  ls = new LineSensor(PIN_LINESENSOR_LEFT, PIN_LINESENSOR_RIGHT);
  ls->autoCalibrate();
}

void loop(){ //loop runs over and over again
  ls->readSensors();
  if (ls->lineOnBoth()) {
    drive->fwd(50);
  }
  else if(ls->lineOnLeftEdge()){
    drive->turnLeft(50, 250);
    drive->stop();
  }
  else if(ls->lineOnRightEdge()){
    drive->turnRight(50, 250);
    drive->stop();
  }
  else{
    drive->fwd(50);
  }
}


