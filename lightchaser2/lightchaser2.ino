/*
Blink

The goal of this program is to renforce our understanding of
        pinmode() command
        DigitalWrite() command
        Delay() command
*/

// the setup function runs once when you press reset or power the board

void setup() {
  
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);         // initialize digital pin 2, 3, 4, 5 as an output.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);        //Making all of them turned on except one changing which one is on every 500 millisecond
  digitalWrite(3, LOW);         //pin 2 is on
  digitalWrite(4, LOW);         //pin 3, 4, 5 off
  digitalWrite(5, LOW);   
  delay(500);                      
  digitalWrite(2, LOW);         //pin 2 is off
  digitalWrite(3, HIGH);        //pin 3 is on
  digitalWrite(4, LOW);         //pin 4 is off
  digitalWrite(5, LOW);         //pin 5 is off
  delay(500); 
  digitalWrite(2, LOW);         //pin 2 is off
  digitalWrite(3, LOW);         //pin 3 off
  digitalWrite(4, HIGH);        //pin 4 on
  digitalWrite(5, LOW);         //pin 3 off
  delay(500); 
  digitalWrite(2, LOW);         //pin 2 off
  digitalWrite(3, LOW);         //pin 3 off
  digitalWrite(4, LOW);         //pin 4 off
  digitalWrite(5, HIGH);         //pin 5 is on then goes back in descending order until it reaches 3
  delay(500);    
   digitalWrite(2, LOW);         //pin 2 is off
  digitalWrite(3, LOW);         //pin 3 is off
  digitalWrite(4, HIGH);        //pin 4 is on
  digitalWrite(5, LOW);         //pin 5 off
  delay(500);    
  digitalWrite(2, LOW);         //pin 2 is off
  digitalWrite(3, HIGH);        //pin 3 is on
  digitalWrite(4, LOW);         //pin 4 off
  digitalWrite(5, LOW);         //pin 5 off
  delay(500);                
}
