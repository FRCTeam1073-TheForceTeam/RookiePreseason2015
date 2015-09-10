/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 9/10/14

Program: Drive the robot forward until the ultrasonic sensor sees a wall
*/

#include <Servo.h>
#include <NewPing.h>

//Ultrasonic Definitions using the Newping library
#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     8  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
//NewPing method sonar
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

Servo left;  
Servo right;  //creates two servo objects

int distDelay = 50; //time in ms to wait for ultrasonic to receive
int threshHold = 15; //dist to drive to

int getDist(){
  delay(distDelay);                    
  unsigned int uS = sonar.ping(); // Send ping, get ping time in microseconds (uS).
  unsigned int cmDist = uS / US_ROUNDTRIP_CM;
  return cmDist;
}

void drive(){
	if(getDist() > threshHold){
	  left.writeMicroseconds(1700);
 	  right.writeMicroseconds(1300);
	}
	else{
	  left.writeMicroseconds(1500);
  	  right.writeMicroseconds(1500);
	}
}


void setup(){ //setup runs just once
  left.attach(10);
  right.attach(9); //mounts each servo on their respective digital pin
}
void loop(){ //loop runs over and over again
	drive();
}


