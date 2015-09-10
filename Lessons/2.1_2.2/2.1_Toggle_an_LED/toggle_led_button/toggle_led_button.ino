/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 9/9/14

Program: Toggles an LED using the breadboard button
*/

int red = 5;
int button = 7;

void setup(){ //setup runs just once
  pinMode(red, OUTPUT); //establishes red as an output
}
void loop(){
int buttonVal = digitalRead(button);
  if(buttonVal == 1){
    digitalWrite(red, HIGH);
  }
  else{
    digitalWrite(red, LOW);
  }
}
