#include <Servo.h>

#include <Drive.h>
/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: drive the robot forward for a few seconds
Feel free to view the example program within the same folder if you need help!
*/
Drive* drive = new Drive(9, 10);
void setup(){
  
}

void loop(){
  drive->fwd(50);
  
}
