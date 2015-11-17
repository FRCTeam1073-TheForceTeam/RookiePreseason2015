/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Have the LED on pin 5 turn on when the button is pressed
Feel free to view the example program within the same folder if you need help!
*/
#include "Led.h"

Led *redLed;
int i = 0;

void setup()
{
  Serial.begin(9600); 
  redLed = new Led(5, 0);  
}

int addMe(int a, int b)
{
  int c = a+b;
  return c;
}
void loop()
{
  i = addMe(8, 6);
  Serial.println(i); 
  redLed->turnOn();
  delay(500);
  redLed->turnOff();
  delay(500);
}
