/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the robot vary its speed based on how far one turns the potentiometer
Feel free to view the example program within the same folder if you need help!
*/
#include <Servo.h>
#include <Potentiometer.h>
#include <Drive.h>

#define PIN_POT A5
#define PIN_SERVO_RIGHT 9
#define PIN_SERVO_LEFT 10

Drive *drive;
Potentiometer *myPot;

int servoVal = 0;

void speedControl() {
  servoVal = myPot->getPercent();
  drive->fwd(servoVal);
}

void setup(){
  //your code goes here
  Serial.begin(9600);
  drive = new Drive(PIN_SERVO_LEFT, PIN_SERVO_RIGHT);
  myPot = new Potentiometer(PIN_POT);
}

void loop(){
  //also here
  speedControl();
  //Serial.println(myPot->getPercent());
}

