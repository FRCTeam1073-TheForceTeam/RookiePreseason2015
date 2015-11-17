#include <Led.h>

#include <Button.h>



/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the LED on pin 5 turn on when the button is pressed
Feel free to view the example program within the same folder if you need help!
*/
Led *redLed;
Button *myButton;

void setup(){
 redLed=new Led(5);
 myButton=new Button(7);
// Serial.begin(9600);
 
}

void loop(){
  if (myButton->isPressed())
  {
//    Serial.println("button pushed");
   redLed->turnOn();
  }
  else
  {
    redLed->turnOff();
//    Serial.print("Off");
  }
  
}

