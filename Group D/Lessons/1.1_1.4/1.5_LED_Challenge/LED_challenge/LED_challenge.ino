// LED Challenge

int red = 5;
int green = 6;
int yellow = 3;

int blinkDelay = 15;
int greenDelay = 10;
int yellowDelay = 20;

// put your setup code here, to run once:
void setup() {
  
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  
}

// put your main code here, to run repeatedly:
void loop() {
  
  // start red LED
  for(int i = 0; i < 255; i += 2) {
    analogWrite(red, i);
    delay(5);
  }
  // start green LED
  for(int j = 0; j < 255; j += 2) {
    //delay(greenDelay);
    analogWrite(green, j);
    delay(5);
  }
  
  for(int i = 2; i < 255; i += 4) {
    analogWrite(red, i);
    delay(5);
  }
  
  for(int i = 255; i >= 0; i -= 6) {
    analogWrite(red, i);
    delay(blinkDelay);
  }
  // green LED

  for(int j = 255; j >= 0; j -= 6) {
    analogWrite(green, j);
    delay(blinkDelay);
  }
  // yellow LED
  
  for(int k = 255; k >= 0; k -= 6) {
    analogWrite(yellow, k);
    delay(blinkDelay);
  }
}

/*
// red LED
  for(int i = 0; i < 255; i += 5) {
    analogWrite(red, i);
    delay(blinkDelay);
  }
  for(int i = 255; i >= 0; i -= 5) {
    analogWrite(red, i);
    delay(blinkDelay);
  }
  // green LED
  for(int j = 0; j < 255; j += 5) {
    //delay(greenDelay);
    analogWrite(green, j);
    delay(blinkDelay);
  }
  for(int j = 255; j >= 0; j -= 5) {
    analogWrite(green, j);
    delay(blinkDelay);
  }
  // yellow LED
  for(int k = 0; k < 255; k += 5) {
    //delay(yellowDelay);
    analogWrite(yellow, k);
    delay(blinkDelay);
  }
  for(int k = 255; k >= 0; k -= 5) {
    analogWrite(yellow, k);
    delay(blinkDelay);
  }
*/
