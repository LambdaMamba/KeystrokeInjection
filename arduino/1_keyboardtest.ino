#include "Keyboard.h"

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Keyboard.print("Hello!");
  delay(5000);
  //Hello! is typed in every 5 seconds
}
