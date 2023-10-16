/* 
  use potentiometer and display bitvalue and voltage on serial monitor
  AnalogRead and float command


*/ 

// the setup routine runs once when you press reset: 

void setup() { 

  // initialize serial communication at 9600 bits per second: 

  Serial.begin(9600); 

} 

  

// the loop routine runs over and over again forever: 

void loop() { 

  // read the input on analog pin 0: 

  int sensorValue = analogRead(A0); //define value as variable

  // print out the value you read: 

  float voltage = sensorValue*(5.0 / 1023.0); //equation to find the voltage 

  Serial.print("sensorValue: ");  //bit value

  Serial.print(sensorValue); 

  Serial.print("  voltage: ");  // voltage value

  Serial.println(voltage); 

  delay(1);        // delay in between reads for stability 

} 
