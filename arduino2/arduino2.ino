/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int out=5;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT); 
  pinMode(out,INPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  int a;
  a=digitalRead(out);
  if(a)
  {
    digitalWrite(led,LOW);
    delay(100);
  }
  else
  {
    digitalWrite(led,HIGH);  
    delay(100);  
  }    // wait for a second
}
