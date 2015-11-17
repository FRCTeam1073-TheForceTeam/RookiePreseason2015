#include <Potentiometer.h>

#include <Led.h>


/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Dim the led on pin 5 using the potentiometer, so that as the potentiometer is turned, the brightness is adjusted
Feel free to view the example program within the same folder if you need help!
*/

Led* redLed = new Led(5);
Potentiometer* pot = new Potentiometer(A5);

void setup()
{
  
}

void loop()
{
  redLed->turnOnDim(pot->getValue());
}
