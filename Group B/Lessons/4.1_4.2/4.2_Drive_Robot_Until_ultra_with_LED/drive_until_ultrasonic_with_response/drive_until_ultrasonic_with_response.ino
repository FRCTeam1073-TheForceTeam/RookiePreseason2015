/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 8/16/14

Program: Drive the robot forward until the ultrasonic sensor sees a wall
*/

#include <Servo.h>
#include <NewPing.h>
#include <Ultrasonic.h>
#include <Drive.h>
#include <AnalogOut.h>
#include <Led.h>

#define PIN_LED_YELLOW    3
#define PIN_LED_RED       5
#define PIN_LED_GREEN     6
#define PIN_SERVO_RIGHT   9
#define PIN_SERVO_LEFT    10
#define PIN_BUZZER        11
#define PIN_ULTRASONIC_TRIGGER  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define PIN_ULTRASONIC_ECHO     8  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.


int threshold = 15; //dist to drive to
Drive *drive;
Ultrasonic *us;
Led *redLed;
Led *yellowLed;
Led *greenLed;
AnalogOut *buzzer;

void dimmer(){
  redLed->rampUp(5,1);
  redLed->rampDown(5,1);
  yellowLed->rampUp(5,1);
  yellowLed->rampDown(5,1);
  greenLed->rampUp(5,1);
  greenLed->rampDown(5,1);
}

void setup(){ //setup runs just once
  drive = new Drive(PIN_SERVO_LEFT, PIN_SERVO_RIGHT);
  us = new Ultrasonic(PIN_ULTRASONIC_TRIGGER, PIN_ULTRASONIC_ECHO);
  yellowLed = new Led(PIN_LED_YELLOW);
  redLed = new Led(PIN_LED_RED);
  greenLed = new Led(PIN_LED_GREEN);
  buzzer = new AnalogOut(PIN_BUZZER);

}
void loop(){ //loop runs over and over again
  if(us->getDistance() > threshold){
    drive->fwd(50);
    dimmer();
  }
  else{
    drive->stop();
    buzzer->pulse(2, 150);
    delay(40);
  }
}


