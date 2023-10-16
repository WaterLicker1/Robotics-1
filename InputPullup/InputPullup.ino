/*
  Input Pull-up Serial

  This the goal is the use of pinMode(INPUT_PULLUP). 
  make a input pullup 
  
*/

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 3 as an input and enable the internal pull-up resistor
  pinMode(3, INPUT_PULLUP);     //enable pull-up resistor
  pinMode(14, OUTPUT);          //configure 14 as an output
}

void loop() {
  //read the pushbutton value into a variable
  int value = digitalRead(3);
  //print out the value of the pushbutton
  Serial.println(value);

  // Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on pin 14 when the
  // button's pressed, and off when it's not:
  if (value == HIGH) {
    digitalWrite(14, LOW);
  } else {
    digitalWrite(14, HIGH);
  }
}
