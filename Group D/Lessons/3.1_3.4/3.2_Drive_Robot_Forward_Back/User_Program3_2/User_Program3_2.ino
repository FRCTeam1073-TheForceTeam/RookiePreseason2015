#include <Servo.h>
#include <Drive.h>

/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: drive the robot forward, and then backward, for two different time intervals
Feel free to view the example program within the same folder if you need help!
*/


Drive* drive;
void setup(){
  drive = new Drive(9, 10);
}
int time = 500;
void loop(){
  drive->fwd(50);
  delay(time);
  drive->stop();
  delay(time);
  drive->rev(50);
  delay(time);
  drive->stop();
  delay(time);
}
