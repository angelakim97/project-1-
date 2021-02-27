#include <Servo.h>

Servo servoMotor;       
int servoPin = 9;      
int servoAngle = 0;    
void setup() {
  Serial.begin(9600);               
  servoMotor.attach(servoPin);       
} 
 
void loop() {
  
  int x = 1;
   for (int i = 0; i > -1; i = i + x){
    servoMotor.write(i);                
      
      if (i == 180) x = -1;             
      delay(20);                         
      Serial.println(i);                
      
   }  
}
