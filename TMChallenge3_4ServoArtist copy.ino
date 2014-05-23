/* The Tech Museum of Innovation  - www.thetech.org

"Servo Artist" - May 24th 2014
Challenge - 3 Set up 2 Potentiometers for 2 Servos
Challenge - 4 Make a Servo Artist

author: Tenaya Hurst - Arduino Woman

2 Servos
2 Potentiometers
20 jumper wires

*/

#include <Servo.h> 
 
int potPin1 = 0;  
int potPin2 = 1;
int servoPin1 = 9;
int servoPin2 = 10;
Servo servo1, servo2; 
 
void setup() 
{ 
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  Serial.begin(9600);
} 
 
void loop() 
{ 
  int reading1 = analogRead(potPin1);     // 0 to 1023
  int reading2 = analogRead(potPin2);
  int angle1 = reading1 / 6;             // 0 to 180-ish
  int angle2 = reading2 / 6;
  servo1.write(angle1);
  servo2.write(angle2);
  
  Serial.print(angle1);
  Serial.print(", ");
  Serial.println(angle2);
} 
