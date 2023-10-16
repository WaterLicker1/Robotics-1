/*
Make Led blink and dispay values of a pushbutton
theme: millis()
*/
const int ledPin = LED_BUILTIN;  // the number of the LED pin 
// Variables will change: 
int ledState = LOW;  // ledState used to set the LED 
// Generally, you should use "unsigned long" for variables that hold time 

// The value will quickly become too large for an int to store 

unsigned long previousMillis = 0;  // will store last time LED was updated 
// constants won't change: 
const long interval = 1000;  // interval at which to blink (milliseconds) 
int pushButton = 2;         //pin2 = pb
void setup() { 
// set the digital pin as output: 
pinMode(pushButton, INPUT);
pinMode(ledPin, OUTPUT); 
 // initialize serial communication at 9600 bits per second:
Serial.begin(9600);
}  
void loop() { 
// here is where you'd put code that needs to be running all the time.  
// check to see if it's time to blink the LED; that is, if the difference 
// between the current time and last time you blinked the LED is bigger than 
// the interval at which you want to blink the LED. 
unsigned long currentMillis = millis(); 
if (currentMillis - previousMillis >= interval) { 
// save the last time you blinked the LED 
previousMillis = currentMillis;  
// if the LED is off turn it on and vice-versa: 
    if (ledState == LOW) { 
      ledState = HIGH; 
    } else { 
      ledState = LOW; 
    } 
    // set the LED with the ledState of the variable: 
    digitalWrite(ledPin, ledState); 
  } 
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print the value it reads using not command
  Serial.println(buttonState);
  delay(1);  // delay in between reads for stability
} 
