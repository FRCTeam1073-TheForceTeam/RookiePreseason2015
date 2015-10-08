/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Cycle the 3 leds of the robot, so that one led turns on, then the next, then the next
Feel free to view the example program within the same folder if you need help!
*/

void setup(){
  //your code goes here
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop(){
  //also here
  int time = 500;
  digitalWrite(5, HIGH);
  delay(time);
  digitalWrite(5, LOW);
  delay(time);
  digitalWrite(4, HIGH);
  delay(time);
  digitalWrite(4, LOW);
  delay(time);
  digitalWrite(6, HIGH);
  delay(time);
  digitalWrite(6, LOW);
  delay(time);
}
