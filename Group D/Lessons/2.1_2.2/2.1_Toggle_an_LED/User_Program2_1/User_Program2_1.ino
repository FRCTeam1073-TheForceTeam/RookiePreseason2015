/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the LED on pin 5 turn on when the button is pressed
Feel free to view the example program within the same folder if you need help!
*/
#include <Led.h>;
#include <Button.h>;

 Led* redLed = new Led(5);
 //green and yellow are extra
 Led* greenLed = new Led(6);
 Led* yellowLed = new Led(3);
 Button* redButton = new Button(7);

void setup(){
  //your code goes here
  redLed->turnOff();
  greenLed->turnOff();
  yellowLed->turnOff();
}

void loop(){
  //if button is pressed turn on light
  /*
   * 
   if( redButton->isPressed()){
    redLed->turnOn(); 
    greenLed->turnOff();
  } else{
    redLed->turnOff();
    greenLed->turnOn();
  }*/

  /*
   * when button is pressed,  wait until not pressed to activate redLed
   * when button is pressed, wait until not pressed to deactivate redLed
   * cycle to next Led (red then green then yellow)
   */
   if( redButton->isPressed()) {
    while(redButton->isPressed());
    if(redLed->isOn()) {
      redLed->turnOff();
      greenLed->turnOn();
    } else if(greenLed->isOn()) {
      greenLed->turnOff();
      yellowLed->turnOn();      
    } else {
      yellowLed->turnOff();
      redLed->turnOn();
    }
    
   }
}
