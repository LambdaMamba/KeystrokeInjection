
char charset_main[] = {'1', '2', '3'};

int len = sizeof(charset_main)/sizeof(char);


void bruteforce(char charset[], String prev, int len, int n){  
    // check if n == 0
    if (n == 0){
        //Keyboard.println will also enter the value after typing the string out
        Serial.println(prev);
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

}

void loop() {
  
    //n is the length of the password
    int n;
    for(n = 1; n < 5; n++){
      //try bruteforce for different lengths
      bruteforce(charset_main, "", len, n);  
    }
}
