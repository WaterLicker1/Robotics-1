/*
Make Led light up at certain voltage with potentiometer
theme: if and else
*/
void setup() { 
  // initialize serial communication at 9600 bits per second: 
  Serial.begin(9600); 
  pinMode(2, OUTPUT); //define pin 2 as output
} 
// the loop routine runs over and over again forever: 
void loop() { 
  // read the input on analog pin 0: 
  int sensorValue = analogRead(A0); 
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V): 
  float voltage = sensorValue * (5.0 / 1023.0); 
  // print out the value you read: 
  Serial.println(voltage); 
  if ( voltage >= 1 ){  //if voltage >= 1     1LED lights up

    digitalWrite(2, HIGH); 

  } else { analogWrite(2, LOW); 
  } 

   if ( voltage >= 2 ){  //if voltage >= 2     2LED lights up

    digitalWrite(3, HIGH); 

  } else { analogWrite(3, LOW); 
  } 

   if ( voltage >= 3 ){  //if voltage >= 3  3LED lights up

    digitalWrite(4, HIGH); 

  } else { analogWrite(4, LOW); 
  } 

   if ( voltage >= 4 ){ 

    digitalWrite(5, HIGH);  //if voltage >= 4  4LED lights up

  } else { analogWrite(5, LOW); 

  } 

   if ( voltage >= 5 ){  //if voltage >= 5     5LED lights up

    digitalWrite(6, HIGH); 

  } else { analogWrite(6, LOW); 
  }   
} 