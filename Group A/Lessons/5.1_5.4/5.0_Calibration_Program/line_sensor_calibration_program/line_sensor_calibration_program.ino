/* Software 1073 Example Program
Written and debugged for use on the Arduino boebot platform
last updated: 10/17/14

Program: Reads and prints the values for the Left and Right Line Sensors
*/
#include <LineSensor.h>

#define PIN_LINESENSOR_LEFT   0
#define PIN_LINESENSOR_RIGHT  1

LineSensor *ls;

void setup(){
  Serial.begin(9600);
  ls = new LineSensor(PIN_LINESENSOR_LEFT, PIN_LINESENSOR_RIGHT);
}
void loop(){
  ls->readSensors();
  Serial.print("Current Left Sensor Value: ");
  Serial.println(ls->getRawLeft());
  Serial.print("Current Right Sensor Value: ");
  Serial.println(ls->getRawRight());
  Serial.println("");
  delay(1000);
}

