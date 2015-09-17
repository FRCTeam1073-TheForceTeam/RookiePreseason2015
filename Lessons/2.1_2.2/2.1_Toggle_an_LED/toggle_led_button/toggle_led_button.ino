/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 9/9/14

Program: Toggles an LED using the breadboard button
*/

/*int red = 5;
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
}*/

class ButtonToggle {
  public:
   
    ButtonToggle(int buttonVal);
    void begin();
    void toggleOn();
    void toggleOff();
    bool status();
  private:
    int _pin;
    bool _status;
    int red = 5;
    int button = 7;
}
ButtonToggle::ButtonToggle(int buttonVal)
void ButtonToggle::begin();
//Put starting functions here (i.e. set pin to output/input)

void ButtonToggle::toggleOn();
//Method for toggling on

void ButtonToggle::toggleOff();
//Method for toggling off

void setup(){
  
}

void loop(){
  
}

