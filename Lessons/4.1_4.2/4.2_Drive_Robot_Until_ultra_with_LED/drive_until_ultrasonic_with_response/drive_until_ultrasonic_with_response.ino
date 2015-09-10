/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 8/16/14

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

int red = 5;
int yellow = 3;
int green = 6;
int buzzer = 11;

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
          dimmer();
	}
	else{
	  left.writeMicroseconds(1500);
  	  right.writeMicroseconds(1500);
          analogWrite(buzzer, 2);
          delay(150);
          analogWrite(buzzer, 0);
          delay(40);
	}
}
void dimmer(){
  for(int i = 0; i <= 255; i+=5){
    analogWrite(red, i);
    delay(1);
  }
  for(int i = 255; i >=0; i-=5){
    analogWrite(red, i);
    delay(1);  
  }
  for(int j = 0; j <= 255; j+=5){
    analogWrite(yellow, j);
    delay(1);
  }
  for(int j = 255; j >=0; j-=5){
    analogWrite(yellow, j);
    delay(1);
  }
  for(int k = 0; k <= 255; k+=5){
    analogWrite(green, k);
    delay(1);
  }
  for(int k = 255; k >=0; k-=5){
    analogWrite(green, k);
    delay(1);
  }
}
  


void setup(){ //setup runs just once
  left.attach(10);
  right.attach(9); //mounts each servo on their respective digital pin
 }
void loop(){ //loop runs over and over again
	drive();
      
}


