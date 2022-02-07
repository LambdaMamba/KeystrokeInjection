#include "Keyboard.h"

//we are using pin 9 for the switch input
int switchPin = 9;
int switchstate = 0;

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();

  //setup pin 9 as input
  pinMode(switchPin, INPUT);
}

void loop() {
  //check the state of pin 9, whether it is HIGH (on) or LOW (off)
  switchstate = digitalRead(switchPin);

  if (switchstate == HIGH){
    //Output to serial monitor
    Serial.println("Its on");
  } else if (switchstate == LOW){
    //Output to serial monitor
    Serial.println("Its off");
  }
}
