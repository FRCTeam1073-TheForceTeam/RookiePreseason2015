#include <Drive.h>

#include <Servo.h>

#include <Button.h>


/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: have the robot drive when the button is pressed
Feel free to view the example program within the same folder if you need help!
*/

#define BUTTON1 7
 
Button* butt1;
Drive* drive;
void setup(){
  //your code goes here
  butt1 = new Button(BUTTON1);

  drive = new Drive(10, 9);
}
void loop(){
  //also here
  if(butt1->isPressed()) {
    drive->fwd(50);
  }else {
    drive->stop();
  }
}
