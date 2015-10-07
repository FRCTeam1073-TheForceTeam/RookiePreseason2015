/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 9/10/14

Program: Drive the robot forward until the ultrasonic sensor sees a wall
*/

#include <Servo.h>
#include <NewPing.h>
#include <Drive.h>
#include <Ultrasonic.h>

#define PIN_SERVO_RIGHT   9
#define PIN_SERVO_LEFT    10
#define PIN_ULTRASONIC_TRIGGER  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define PIN_ULTRASONIC_ECHO     8  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

int threshold = 15; //dist to drive to
Drive *drive;
Ultrasonic *us;

void setup(){ //setup runs just once
  drive = new Drive(PIN_SERVO_LEFT, PIN_SERVO_RIGHT);
  us = new Ultrasonic(PIN_ULTRASONIC_TRIGGER, PIN_ULTRASONIC_ECHO);
}

void loop(){ //loop runs over and over again
  if (us->getDistance() > threshold)
    drive->fwd(50);
  else
    drive->stop();
}


