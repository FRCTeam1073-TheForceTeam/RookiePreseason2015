/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 10/20/14

Program: Using both of the light sensors, drive the robot forward until one of the sensors sees a black line

IMPORTANT NOTE:
This example program, in order to maintain compatibility with all the boebots, does not take any specific line sensor values. 
The integers whiteValLeft and whiteValRight need to be set with your BoeBot's values.
Simply replace the 0's with your values
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
  ls->calibrate(49, 49);
}
void loop(){ //loop runs over and over again
  ls->readSensors();
  if(ls->lineOnBoth()){
    drive->stop();
  }
  else{
    drive->fwd(50);
  }
  
}


