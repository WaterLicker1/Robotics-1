/*
The goal is to understand how to wire a RGB while using our knowledge on blink to create a lightchaser
*/

void setup() {
  
  pinMode(2, OUTPUT);         //pin 2 blue
  pinMode(3, OUTPUT);         //pin 3 green
  pinMode(4, OUTPUT);         //pin 5 red
  pinMode(5, OUTPUT);         // initialize digital pin 2, 3, 4, 5 as an output.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);        //pin 2 on          Making all of them turned on except one changing which one is on every 500 millisecond in ascending order 2,3,5 then going back to 3 then loops
  digitalWrite(3, LOW);         //pin 3 off
  digitalWrite(4, LOW);         //pin 3 off 
  digitalWrite(5, LOW);         //pin 3 off   
  delay(500);                   //on for 500 millisecond   
  digitalWrite(2, LOW);         //pin 3 off
  digitalWrite(3, HIGH);         //pin 3 on
  digitalWrite(4, LOW);         //pin 3 off
  digitalWrite(5, LOW);         //pin 3 off   
  delay(500);                   //on for 500 millisecond 
  digitalWrite(2, LOW);         //pin 2 off
  digitalWrite(3, LOW);         //pin 3 off
  digitalWrite(4, LOW);         //pin 4 off
  digitalWrite(5, HIGH);         //pin 5 on   
  delay(500);                   //on for 500 millisecond                      
  digitalWrite(2, LOW);         //pin 2 off
  digitalWrite(3, HIGH);         //pin 3 on
  digitalWrite(4, LOW);         //pin 4 off
  digitalWrite(5, LOW);         //pin 5 off  
  delay(500);                   //on for 500 millisecond 
  }

