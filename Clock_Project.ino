/*
  Arrays

 Demonstrates the use of  an array to hold pin numbers
 in order to iterate over the pins in a sequence.
 Lights multiple LEDs in sequence, then in reverse.

 Unlike the For Loop tutorial, where the pins have to be
 contiguous, here the pins can be in any random order.

 The circuit:
 * LEDs from pins 2 through 7 to ground

 created 2006
 by David A. Mellis
 modified 30 Aug 2011
 by Tom Igoe

This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Array
 */

int timer = 1000;           // The higher the number, the slower the timing.
int ledPins[] = {
  1,2,3,4,5,6,7,0,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41
};       // an array of pin numbers to which LEDs are attached
int pinCount = 1;

// the number of pins (i.e. the length of the array)

void setup() {
  // the array elements are numbered from 0 to (pinCount - 1).
  // use a for loop to initialize each pin as an output:
 
    pinMode(ledPins[0], OUTPUT); 
    pinMode(ledPins[1], OUTPUT);
    pinMode(ledPins[2], OUTPUT);
    pinMode(ledPins[3], OUTPUT);
    pinMode(ledPins[4], OUTPUT);
    pinMode(ledPins[5], OUTPUT);
    pinMode(ledPins[6], OUTPUT);
    pinMode(ledPins[7], OUTPUT); 
    pinMode(ledPins[8], OUTPUT);
    pinMode(ledPins[9], OUTPUT);
    pinMode(ledPins[10], OUTPUT);
    pinMode(ledPins[11], OUTPUT);
    pinMode(ledPins[12], OUTPUT);
    pinMode(ledPins[13], OUTPUT);
    pinMode(ledPins[14], OUTPUT); 
    pinMode(ledPins[15], OUTPUT);
    pinMode(ledPins[16], OUTPUT);
    pinMode(ledPins[17], OUTPUT);
    pinMode(ledPins[18], OUTPUT);
    pinMode(ledPins[19], OUTPUT);
    pinMode(ledPins[20], OUTPUT);
    pinMode(ledPins[21], OUTPUT); 
    pinMode(ledPins[22], OUTPUT);
    pinMode(ledPins[23], OUTPUT);
    pinMode(ledPins[24], OUTPUT);
    pinMode(ledPins[25], OUTPUT);
    pinMode(ledPins[26], OUTPUT);
    pinMode(ledPins[27], OUTPUT);
    pinMode(ledPins[28], OUTPUT); 
    pinMode(ledPins[29], OUTPUT);
    pinMode(ledPins[30], OUTPUT);
    pinMode(ledPins[31], OUTPUT);
    pinMode(ledPins[32], OUTPUT);
    pinMode(ledPins[33], OUTPUT);
    pinMode(ledPins[34], OUTPUT);
     pinMode(ledPins[35], OUTPUT); 
    pinMode(ledPins[36], OUTPUT);
    pinMode(ledPins[37], OUTPUT);
    pinMode(ledPins[38], OUTPUT);
    pinMode(ledPins[39], OUTPUT);
    pinMode(ledPins[40], OUTPUT);
    pinMode(ledPins[41], OUTPUT);
  
  
}

void loop() {
  // loop from the lowest pin to the highest:
   for(int n=0; n<=2; n++){
   for(int m=0; m<=9; m++){
   for(int k=0; k<=5; k++){
  for(int j=0; j<=9; j++){
  for(int i=0; i<=5; i++){
  
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    // turn the pin on:
 
   digitalWrite(ledPins[0], HIGH);
   digitalWrite(ledPins[1], HIGH);    //FOR ZERO
   digitalWrite(ledPins[2], LOW);
   digitalWrite(ledPins[3], HIGH);
   digitalWrite(ledPins[4], HIGH);
   digitalWrite(ledPins[5], HIGH);
   digitalWrite(ledPins[6], HIGH);
   
   delay(timer);
    digitalWrite(ledPins[0], LOW);
   digitalWrite(ledPins[1], LOW);
   digitalWrite(ledPins[2], LOW);
   digitalWrite(ledPins[3], LOW);     //FOR 0NE
   digitalWrite(ledPins[4], LOW);
   digitalWrite(ledPins[5], HIGH);
   digitalWrite(ledPins[6], HIGH);
   
   delay(timer);
    digitalWrite(ledPins[0], HIGH);
   digitalWrite(ledPins[1], HIGH);
   digitalWrite(ledPins[2], HIGH);
   digitalWrite(ledPins[3], LOW);   //FOR TWO
   digitalWrite(ledPins[4], HIGH);
   digitalWrite(ledPins[5], HIGH);
   digitalWrite(ledPins[6], LOW);
   
   delay(timer);
   digitalWrite(ledPins[0], HIGH);
   digitalWrite(ledPins[1], LOW);
   digitalWrite(ledPins[2], HIGH);
   digitalWrite(ledPins[3], LOW);
   digitalWrite(ledPins[4], HIGH);    //FOR THREE
   digitalWrite(ledPins[5], HIGH);
   digitalWrite(ledPins[6], HIGH);
   delay(timer);
   digitalWrite(ledPins[0], LOW);
   digitalWrite(ledPins[1], LOW);
   digitalWrite(ledPins[2], HIGH);
   digitalWrite(ledPins[3], HIGH);   //FOR FOUR
   digitalWrite(ledPins[4], LOW);
   digitalWrite(ledPins[5], HIGH);
   digitalWrite(ledPins[6], HIGH);
   delay(timer);
   digitalWrite(ledPins[0], HIGH);
   digitalWrite(ledPins[1], LOW);
   digitalWrite(ledPins[2], HIGH);
   digitalWrite(ledPins[3], HIGH);   //FOR FIVE
   digitalWrite(ledPins[4], HIGH);
   digitalWrite(ledPins[5], LOW);
   digitalWrite(ledPins[6], HIGH);
   delay(timer);
   digitalWrite(ledPins[0], HIGH);
   digitalWrite(ledPins[1], HIGH);
   digitalWrite(ledPins[2], HIGH);
   digitalWrite(ledPins[3], HIGH);    //FOR SIX
   digitalWrite(ledPins[4], HIGH);
   digitalWrite(ledPins[5], LOW);
   digitalWrite(ledPins[6], HIGH);
   delay(timer);
   digitalWrite(ledPins[0], LOW);
   digitalWrite(ledPins[1], LOW);
   digitalWrite(ledPins[2], LOW);
   digitalWrite(ledPins[3], LOW);     //FOR SEVEN
   digitalWrite(ledPins[4], HIGH);
   digitalWrite(ledPins[5], HIGH);
   digitalWrite(ledPins[6], HIGH);
   delay(timer);
   digitalWrite(ledPins[0], HIGH);
   digitalWrite(ledPins[1], HIGH);
   digitalWrite(ledPins[2], HIGH);
   digitalWrite(ledPins[3], HIGH);
   digitalWrite(ledPins[4], HIGH);    //FOR EIGHT
   digitalWrite(ledPins[5], HIGH);
   digitalWrite(ledPins[6], HIGH);
  delay(timer);
  digitalWrite(ledPins[0], HIGH);
   digitalWrite(ledPins[1], LOW);
   digitalWrite(ledPins[2], HIGH);
   digitalWrite(ledPins[3], HIGH);    //FOR NINE
   digitalWrite(ledPins[4], HIGH);
   digitalWrite(ledPins[5], HIGH);
   digitalWrite(ledPins[6], HIGH);
   delay(timer);
  
  }

  if(i==0){

    digitalWrite(ledPins[7], LOW);
   digitalWrite(ledPins[8], LOW);
   digitalWrite(ledPins[9], LOW);
   digitalWrite(ledPins[10], LOW);     //FOR 0NE
   digitalWrite(ledPins[11], LOW);
   digitalWrite(ledPins[12], HIGH);
   digitalWrite(ledPins[13], HIGH);
   }

  else if(i==1){

digitalWrite(ledPins[7], HIGH);
   digitalWrite(ledPins[8], HIGH);
   digitalWrite(ledPins[9], HIGH);
   digitalWrite(ledPins[10], LOW);   //FOR TWO
   digitalWrite(ledPins[11], HIGH);
   digitalWrite(ledPins[12], HIGH);
   digitalWrite(ledPins[13], LOW);
      
  }
  else if(i==2){

       digitalWrite(ledPins[7], HIGH);
   digitalWrite(ledPins[8], LOW);
   digitalWrite(ledPins[9], HIGH);
   digitalWrite(ledPins[10], LOW);
   digitalWrite(ledPins[11], HIGH);    //FOR THREE
   digitalWrite(ledPins[12], HIGH);
   digitalWrite(ledPins[13], HIGH);
  }
  else if(i==3){

       digitalWrite(ledPins[7], LOW);
   digitalWrite(ledPins[8], LOW);
   digitalWrite(ledPins[9], HIGH);
   digitalWrite(ledPins[10], HIGH);   //FOR FOUR
   digitalWrite(ledPins[11], LOW);
   digitalWrite(ledPins[12], HIGH);
   digitalWrite(ledPins[13], HIGH);
  }
  else if(i==4){

       digitalWrite(ledPins[7], HIGH);
   digitalWrite(ledPins[8], LOW);
   digitalWrite(ledPins[9], HIGH);
   digitalWrite(ledPins[10], HIGH);   //FOR FIVE
   digitalWrite(ledPins[11], HIGH);
   digitalWrite(ledPins[12], LOW);
   digitalWrite(ledPins[13], HIGH);
  }
  else if(i>=5){
   digitalWrite(ledPins[7], LOW);
   digitalWrite(ledPins[8], LOW);
   digitalWrite(ledPins[9], LOW);
   digitalWrite(ledPins[10], LOW);   //FOR ZERO
   digitalWrite(ledPins[11], LOW);
   digitalWrite(ledPins[12], LOW);
   digitalWrite(ledPins[13], LOW);
  }
  }
if(j==0){
  digitalWrite(ledPins[14], LOW);
   digitalWrite(ledPins[15], LOW);
   digitalWrite(ledPins[16], LOW);
   digitalWrite(ledPins[17], LOW);     //FOR 0NE
   digitalWrite(ledPins[18], LOW);
   digitalWrite(ledPins[19], HIGH);
   digitalWrite(ledPins[20], HIGH);
}
else if(j==1){
  digitalWrite(ledPins[14], HIGH);
   digitalWrite(ledPins[15], HIGH);
   digitalWrite(ledPins[16], HIGH);
   digitalWrite(ledPins[17], LOW);   //FOR TWO
   digitalWrite(ledPins[18], HIGH);
   digitalWrite(ledPins[19], HIGH);
   digitalWrite(ledPins[20], LOW);
}
else if(j==2){
   digitalWrite(ledPins[14], HIGH);
   digitalWrite(ledPins[15], LOW);
   digitalWrite(ledPins[16], HIGH);
   digitalWrite(ledPins[17], LOW);
   digitalWrite(ledPins[18], HIGH);    //FOR THREE
   digitalWrite(ledPins[19], HIGH);
   digitalWrite(ledPins[20], HIGH);
}
else if(j==3){
  digitalWrite(ledPins[14], LOW);
   digitalWrite(ledPins[15], LOW);
   digitalWrite(ledPins[16], HIGH);
   digitalWrite(ledPins[17], HIGH);   //FOR FOUR
   digitalWrite(ledPins[18], LOW);
   digitalWrite(ledPins[19], HIGH);
   digitalWrite(ledPins[20], HIGH);
}
else if(j==4){
   digitalWrite(ledPins[14], HIGH);
   digitalWrite(ledPins[15], LOW);
   digitalWrite(ledPins[16], HIGH);
   digitalWrite(ledPins[17], HIGH);   //FOR FIVE
   digitalWrite(ledPins[18], HIGH);
   digitalWrite(ledPins[19], LOW);
   digitalWrite(ledPins[20], HIGH);
}
else if(j==5){
   digitalWrite(ledPins[14], HIGH);
   digitalWrite(ledPins[15], HIGH);
   digitalWrite(ledPins[16], HIGH);
   digitalWrite(ledPins[17], HIGH);    //FOR SIX
   digitalWrite(ledPins[18], HIGH);
   digitalWrite(ledPins[19], LOW);
   digitalWrite(ledPins[20], HIGH);
}
else if(j==6){
  digitalWrite(ledPins[14], LOW);
   digitalWrite(ledPins[15], LOW);
   digitalWrite(ledPins[16], LOW);
   digitalWrite(ledPins[17], LOW);     //FOR SEVEN
   digitalWrite(ledPins[18], HIGH);
   digitalWrite(ledPins[19], HIGH);
   digitalWrite(ledPins[20], HIGH);
}
else if(j==7){
  digitalWrite(ledPins[14], HIGH);
   digitalWrite(ledPins[15], HIGH);
   digitalWrite(ledPins[16], HIGH);
   digitalWrite(ledPins[17], HIGH);
   digitalWrite(ledPins[18], HIGH);    //FOR EIGHT
   digitalWrite(ledPins[19], HIGH);
   digitalWrite(ledPins[20], HIGH);
}

else if(j==8){
  digitalWrite(ledPins[14], HIGH);
   digitalWrite(ledPins[15], LOW);
   digitalWrite(ledPins[16], HIGH);
   digitalWrite(ledPins[17], HIGH);    //FOR NINE
   digitalWrite(ledPins[18], HIGH);
   digitalWrite(ledPins[19], HIGH);
   digitalWrite(ledPins[20], HIGH);
}
else if(j>=9){
   digitalWrite(ledPins[14], LOW);
   digitalWrite(ledPins[15], LOW);
   digitalWrite(ledPins[16], LOW);
   digitalWrite(ledPins[17], LOW);   //FOR ZERO
   digitalWrite(ledPins[18], LOW);
   digitalWrite(ledPins[19], LOW);
   digitalWrite(ledPins[20], LOW);
}
}
if (k==0){
  digitalWrite(ledPins[21], LOW);
   digitalWrite(ledPins[22], LOW);
   digitalWrite(ledPins[23], LOW);
   digitalWrite(ledPins[24], LOW);     //FOR 0NE
   digitalWrite(ledPins[25], LOW);
   digitalWrite(ledPins[26], HIGH);
   digitalWrite(ledPins[27], HIGH);
}
else if(k==1){
  digitalWrite(ledPins[21], HIGH);
   digitalWrite(ledPins[22], HIGH);
   digitalWrite(ledPins[23], HIGH);
   digitalWrite(ledPins[24], LOW);   //FOR TWO
   digitalWrite(ledPins[25], HIGH);
   digitalWrite(ledPins[26], HIGH);
   digitalWrite(ledPins[27], LOW);
}
else if(k==2){
  digitalWrite(ledPins[21], HIGH);
   digitalWrite(ledPins[22], LOW);
   digitalWrite(ledPins[23], HIGH);
   digitalWrite(ledPins[24], LOW);
   digitalWrite(ledPins[25], HIGH);    //FOR THREE
   digitalWrite(ledPins[26], HIGH);
   digitalWrite(ledPins[27], HIGH);
}
else if(k==3){
   digitalWrite(ledPins[21], LOW);
   digitalWrite(ledPins[22], LOW);
   digitalWrite(ledPins[23], HIGH);
   digitalWrite(ledPins[24], HIGH);   //FOR FOUR
   digitalWrite(ledPins[25], LOW);
   digitalWrite(ledPins[26], HIGH);
   digitalWrite(ledPins[27], HIGH);
}
else if(k==4){
  digitalWrite(ledPins[21], HIGH);
   digitalWrite(ledPins[22], LOW);
   digitalWrite(ledPins[23], HIGH);
   digitalWrite(ledPins[24], HIGH);   //FOR FIVE
   digitalWrite(ledPins[25], HIGH);
   digitalWrite(ledPins[26], LOW);
   digitalWrite(ledPins[27], HIGH);
}
else if(k>=5){
  digitalWrite(ledPins[21], LOW);
   digitalWrite(ledPins[22], LOW);
   digitalWrite(ledPins[23], LOW);
   digitalWrite(ledPins[24], LOW);   //FOR ZERO
   digitalWrite(ledPins[25], LOW);
   digitalWrite(ledPins[26], LOW);
   digitalWrite(ledPins[27], LOW);
}
  
   }

   if(m==0){
     digitalWrite(ledPins[28], LOW);
   digitalWrite(ledPins[29], LOW);
   digitalWrite(ledPins[30], LOW);
   digitalWrite(ledPins[31], LOW);     //FOR 0NE
   digitalWrite(ledPins[32], LOW);
   digitalWrite(ledPins[33], HIGH);
   digitalWrite(ledPins[34], HIGH);
   }
   else if(m==1){
    digitalWrite(ledPins[28], HIGH);
   digitalWrite(ledPins[29], HIGH);
   digitalWrite(ledPins[30], HIGH);
   digitalWrite(ledPins[31], LOW);   //FOR TWO
   digitalWrite(ledPins[32], HIGH);
   digitalWrite(ledPins[33], HIGH);
   digitalWrite(ledPins[34], LOW);
   }
   else if(m==2){
    digitalWrite(ledPins[28], HIGH);
   digitalWrite(ledPins[29], LOW);
   digitalWrite(ledPins[30], HIGH);
   digitalWrite(ledPins[31], LOW);
   digitalWrite(ledPins[32], HIGH);    //FOR THREE
   digitalWrite(ledPins[33], HIGH);
   digitalWrite(ledPins[34], HIGH);
   }
   else if(m==3){
    digitalWrite(ledPins[28], LOW);
   digitalWrite(ledPins[29], LOW);
   digitalWrite(ledPins[30], HIGH);
   digitalWrite(ledPins[31], HIGH);   //FOR FOUR
   digitalWrite(ledPins[32], LOW);
   digitalWrite(ledPins[33], HIGH);
   digitalWrite(ledPins[34], HIGH);
   }

   else if(m==4){
    digitalWrite(ledPins[28], HIGH);
   digitalWrite(ledPins[29], LOW);
   digitalWrite(ledPins[30], HIGH);
   digitalWrite(ledPins[31], HIGH);   //FOR FIVE
   digitalWrite(ledPins[32], HIGH);
   digitalWrite(ledPins[33], LOW);
   digitalWrite(ledPins[34], HIGH);
   }
else if(m==5){
   digitalWrite(ledPins[28], HIGH);
   digitalWrite(ledPins[29], HIGH);
   digitalWrite(ledPins[30], HIGH);
   digitalWrite(ledPins[31], HIGH);    //FOR SIX
   digitalWrite(ledPins[32], HIGH);
   digitalWrite(ledPins[33], LOW);
   digitalWrite(ledPins[34], HIGH);
}
else if(m==6){
   digitalWrite(ledPins[28], LOW);
   digitalWrite(ledPins[29], LOW);
   digitalWrite(ledPins[30], LOW);
   digitalWrite(ledPins[31], LOW);     //FOR SEVEN
   digitalWrite(ledPins[32], HIGH);
   digitalWrite(ledPins[33], HIGH);
   digitalWrite(ledPins[34], HIGH);
}
else if(m==7){
 digitalWrite(ledPins[28], HIGH);
   digitalWrite(ledPins[29], HIGH);
   digitalWrite(ledPins[30], HIGH);
   digitalWrite(ledPins[31], HIGH);
   digitalWrite(ledPins[32], HIGH);    //FOR EIGHT
   digitalWrite(ledPins[33], HIGH);
   digitalWrite(ledPins[34], HIGH);
}
else if(m==8){
   digitalWrite(ledPins[28], HIGH);
   digitalWrite(ledPins[29], LOW);
   digitalWrite(ledPins[30], HIGH);
   digitalWrite(ledPins[31], HIGH);    //FOR NINE
   digitalWrite(ledPins[32], HIGH);
   digitalWrite(ledPins[33], HIGH);
   digitalWrite(ledPins[34], HIGH);
}
else if(m>=9){
digitalWrite(ledPins[28], LOW);
   digitalWrite(ledPins[29], LOW);
   digitalWrite(ledPins[30], LOW);
   digitalWrite(ledPins[31], LOW);   //FOR ZERO
   digitalWrite(ledPins[32], LOW);
   digitalWrite(ledPins[33], LOW);
   digitalWrite(ledPins[34], LOW);  
}
}
if (n==0){
  digitalWrite(ledPins[35], LOW);
   digitalWrite(ledPins[36], LOW);
   digitalWrite(ledPins[37], LOW);
   digitalWrite(ledPins[38], LOW);     //FOR 0NE
   digitalWrite(ledPins[39], LOW);
   digitalWrite(ledPins[40], HIGH);
   digitalWrite(ledPins[41], HIGH);
}
if(n==1){
digitalWrite(ledPins[35], HIGH);
   digitalWrite(ledPins[36], HIGH);
   digitalWrite(ledPins[37], HIGH);
   digitalWrite(ledPins[38], LOW);   //FOR TWO
   digitalWrite(ledPins[39], HIGH);
   digitalWrite(ledPins[40], HIGH);
   digitalWrite(ledPins[41], LOW);
  
}
else if(n>=2){
  digitalWrite(ledPins[35], LOW);
   digitalWrite(ledPins[36], LOW);
   digitalWrite(ledPins[37], LOW);
   digitalWrite(ledPins[38], LOW);   //FOR ZERO
   digitalWrite(ledPins[39], LOW);
   digitalWrite(ledPins[40], LOW);
   digitalWrite(ledPins[41], LOW);  
}
 }

}

