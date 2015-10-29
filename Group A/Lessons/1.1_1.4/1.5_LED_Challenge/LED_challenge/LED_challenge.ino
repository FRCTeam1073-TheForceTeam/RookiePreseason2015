// LED Challenge
/* Cycle all of the leds to cycle and fade them instead 
 *  of on and off... Use ''For'' loops!
 */
int red = 5;
int yellow = 3;
int green = 6;
int del = 50;

void cycle(int led){
 for (int i = 0; i < 255; i += 5){
  analogWrite(led, i);
  delay(del);  
 }
 for (int i = 255; i > 0; i -= 5){
  analogWrite(led, i);
  delay(del);
 }
}

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}


void loop() {
  cycle(red);
  cycle(yellow);
  cycle(green
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  ); 
  
}
  
  
  
