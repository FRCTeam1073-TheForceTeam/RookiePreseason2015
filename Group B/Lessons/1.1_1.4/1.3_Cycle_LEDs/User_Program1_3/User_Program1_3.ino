int redLed = 5;
int yellowLed = 3;
int greenLed = 6;
int time = 250;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(redLed, HIGH);
  delay(time);
  digitalWrite(redLed, LOW);
  delay(time);
  digitalWrite(yellowLed, HIGH);
  delay(time);
  digitalWrite(yellowLed, LOW);
  delay(time);
  digitalWrite(greenLed, HIGH);
  delay(time);
  digitalWrite(greenLed, LOW);
  delay(time);

  
}
