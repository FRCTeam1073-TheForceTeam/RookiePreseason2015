/*Software 1073 Arduino BoeBots
User Program 
Method stubs are pre-made. add your own code to complete the challenge!

Program Task: Fade in and out the led on pin 5 using 2 for loops
Feel free to view the example program within the same folder if you need help!
*/

void setup(){
  //your code goes here
  pinMode(5, OUTPUT);
}

void loop(){
  //also here
  int time = 5;
  for(int brightness = 0; brightness < 255; brightness++){
    analogWrite(5, brightness);
    delay(time);
  }
  for(int brightness = 255; brightness > 0; brightness--){
    analogWrite(5, brightness);
    delay(time);
  }
}
