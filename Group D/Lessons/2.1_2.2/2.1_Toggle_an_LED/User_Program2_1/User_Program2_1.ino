/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the LED on pin 5 turn on when the button is pressed
Feel free to view the example program within the same folder if you need help!
*/
#include "Led.h";
#include "Button.h";

 Led* redLed = new Led(5);
 Led* greenLed = new Led(6);
 Button* redButton = new Button(7);

void setup(){
  //your code goes here
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, INPUT);
  redLed->turnOff();
  greenLed->turnOff();
}

void loop(){
  //if button is pressed turn on light
  if( redButton->isPressed()){
    redLed->turnOn(); 
    greenLed->turnOff();
  } else{
    redLed->turnOff();
    greenLed->turnOn();
  }
}
