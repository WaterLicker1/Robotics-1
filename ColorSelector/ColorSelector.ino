/*
Create a code capable of creating any RGB color
theme: analogWrite
*/

int red = 11; //definig variable to my pins

int green = 10; 

int blue = 9; 

  

void setup() { 

  // put your setup code here, to run once: 

    pinMode(blue, OUTPUT);  //defining pins as output

    pinMode(green, OUTPUT); 

    pinMode(red, OUTPUT); 

} 

  

void loop() { 

  // put your main code here, to run repeatedly: 

analogWrite(blue, 159); // create RGB color 119,59,159

analogWrite(green, 59); 

analogWrite(red, 119); 

} 
