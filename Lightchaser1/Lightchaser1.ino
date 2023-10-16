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
  digitalWrite(2, HIGH);        //Making all of them turned on except one changing which one is on every 500 millisecond in ascending order 2,3,4,5
  digitalWrite(3, LOW); 
  digitalWrite(4, LOW); 
  digitalWrite(5, LOW);   
  delay(500);                      
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);   
  delay(500); 
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);   
  delay(500); 
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);   
  delay(500);                      
}
