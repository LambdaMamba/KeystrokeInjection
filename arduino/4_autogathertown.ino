#include "Keyboard.h"

int switchPin = 9;
int switchstate = 0;

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  //we set pin 9 as the input pin
  pinMode(switchPin, INPUT);
}

void loop() {
  //check the state of the input pin
  switchstate = digitalRead(switchPin);
  //If HIGH, then its on
  if (switchstate == HIGH){
    int i = 0;
    //generate random number between 5-20
    int stepcount = random(20) + 5;
  
    //generate random number between 0-3
    int randdirec = random(4);
  
    //generate random number between 1-200
    int dance = random(200) + 1;
  
  
    //generate random number between 1-100
    int g = random(100) + 1;
  
    int flag = 0;
  
  
    //1/200 chance of dancing
    if(dance >= 200){
      Keyboard.print("z");
      delay(2000);
    }
    //3/100 chance of g
    if(g >= 98){
      Keyboard.press('g');
      flag = 1;
    }
  
    while(i <= stepcount){
      //break the loop once the switch turns off
      if (switchstate == LOW){
        break;
      }
      switch(randdirec){
        case 0:
          Keyboard.print("w");
          break;
  
        case 1:
          Keyboard.print("s");
          break;
  
        case 2:
          Keyboard.print("a");
          break;
  
        case 3:
          Keyboard.print("d");
          break;
      }
  
      delay(10);
      i = i + 1;
    }
  
    if (flag == 1){
      Keyboard.release('g');
      flag = 0;
    }
    
  }

}
