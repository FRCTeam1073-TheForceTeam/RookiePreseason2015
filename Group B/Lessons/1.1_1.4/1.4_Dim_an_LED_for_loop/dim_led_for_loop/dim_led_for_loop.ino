/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 9/9/14

Program: Dims an led using a for loop
*/
int redLed = 5;


void setup()
{ 
  pinMode(redLed, OUTPUT);  
}
void loop()
{
 for(int i = 0; i < 256; i++)
 {
    analogWrite(redLed, i);
    delay(25);
 }
 for(int i = 255; i >= 0; i--)
 {
    analogWrite(redLed, i);
    delay(25);
 }
 
}

