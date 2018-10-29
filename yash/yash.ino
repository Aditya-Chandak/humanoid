#include<AFMotor.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

int incomingByte = 0;

void setup() {
  // put your setup code here, to run once:
  motor1.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
  motor2.setSpeed(255);
  Serial.begin(19200);
}

void loop() {
  // put your main code here, to run repeatedly:
int var = 2;
//int label1;

if (Serial.available() > 0) {
    int inByte = Serial.read();
    switch (inByte) {
      case '1':
        //Serial.print("Number received: 1 ");
      //Serial.println(inByte);

      delay(1000); 
    motor1.run(FORWARD);
    motor2.run(BACKWARD);
    motor3.run(FORWARD);
    motor4.run(BACKWARD);
    delay(5000);
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
    delay(5000);
     motor1.run(BACKWARD);
    motor2.run(FORWARD);
    motor3.run(BACKWARD);
    motor4.run(FORWARD);
    delay(5000);
    
    
      
        break;
      case '2':
        //Serial.print("Number received 2: ");
      //Serial.println(inByte);
        
        delay(1000); 
    motor1.run(FORWARD);
    motor2.run(BACKWARD);
    motor3.run(FORWARD);
    motor4.run(BACKWARD);
    delay(8000);
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
    delay(5000);
    motor1.run(BACKWARD);
    motor2.run(FORWARD);
    motor3.run(BACKWARD);
    motor4.run(FORWARD);
    delay(5000);
//    int var = 0;
        
        break;
      case '3':
        Serial.print("Not valid table 3 ");
      Serial.println(inByte);
        break;
      case '4':
        Serial.print("Not valid table 4 ");
      Serial.println(inByte);
        break;
      case '5':
         Serial.print("Not valid table 5 ");
      Serial.println(inByte);
        break;
      
      
    }
  }

}
