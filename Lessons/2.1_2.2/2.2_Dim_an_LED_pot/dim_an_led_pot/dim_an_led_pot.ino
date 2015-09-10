/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 9/9/14

Program: Dim an LED on pin 5, using the potentiometer on pin A5
*/

int led = 5;  //creates an int called "led" with a value of 9
int potPin = 5; //creates an int called "potPin with a value of 5

void setup(){ //setup runs just once
  pinMode(led, OUTPUT); //establishes the led as an output
}
void loop(){ //loop runs over and over again
  int dimVal = analogRead(potPin); //read the value of the potentiometer on potPin and set dimVal equal to it
  int ledVal = dimVal / 4; //analogRead ranges from 0 to 1023, analog write scales from 0 to 255. scales potentiometer input
  analogWrite(led, ledVal); //writes the potentiometer value to the led
}


