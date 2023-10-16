/*
  Button with RGB
  when pb not pressed rgb white, pressed rgb off
  theme if command
  
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;  // the number of the pushbutton pin


// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(13, OUTPUT); //blue
  pinMode(12, OUTPUT); //green
  pinMode(11, OUTPUT); //red
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  int red = 11;
  int green = 12;
  int blue = 13;
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == LOW) {
    // Not pressed: LED White
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
  } else {
    // Pressed: LED off:
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
}
