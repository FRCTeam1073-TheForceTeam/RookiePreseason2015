/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Cycle the 3 leds of the robot, so that one led turns on, then the next, then the next
Feel free to view the example program within the same folder if you need help!
*/

int red = 5;
int yellow = 3;
int green = 6;
int Delay = 2000;

void cycle(int led){
  digitalWrite(led, HIGH);
  delay(Delay);
  digitalWrite(led, LOW);
  delay(Delay);
}

void setup(){
 pinMode(red, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(green, OUTPUT);
}

void loop(){
  cycle(red);
  cycle(yellow);
  cycle(green);
  
}
