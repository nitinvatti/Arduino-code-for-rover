#include <AFMotor.h>
 
AF_DCMotor motor1(1, MOTOR12_64KHZ); // Right Motor 
AF_DCMotor motor2(2, MOTOR12_64KHZ);//  Left Motor
void setup() {
                                                                                         
  motor1.setSpeed(100);     // set the speed to 200/255
  motor2.setSpeed(100);     // the speeds can have range from 0 to 255 
  //if we write the code in VOID SETUP the code will run one time only
}

void loop(){
  //if we write the code in VOID LOOP the code will run for 'n' number of times till you switch of the robot
  delay(5000);
  motor1.setSpeed(232);  //first straight 
  motor2.setSpeed(250);  //change the speeds by trail and error method and make it go straight 
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(4000);
  motor1.setSpeed(250);  //right turn
  motor2.setSpeed(232);
  motor1.run(FORWARD);
  motor2.run(RELEASE);
  delay(950);              //change the delay and see that it turns exactly 90degrees by trail and error method 
  motor1.setSpeed(232);  //small straight
  motor2.setSpeed(250);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(2000);
  motor1.setSpeed(250);  //right turn
  motor2.setSpeed(232);
  motor1.run(FORWARD);
  motor2.run(RELEASE);
  delay(950);
  motor1.setSpeed(232);  //small straight
  motor2.setSpeed(250);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(2000);
  motor1.setSpeed(250);  //right turn
  motor2.setSpeed(232);
  motor1.run(FORWARD);
  motor2.run(RELEASE);
  delay(950);
  motor1.setSpeed(232);  //small straight
  motor2.setSpeed(250);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(2000);
   motor1.setSpeed(250);  //left turn
  motor2.setSpeed(232);
  motor1.run(RELEASE);
  motor2.run(FORWARD);
  delay(950);
   motor1.setSpeed(232);  //small straight
  motor2.setSpeed(250);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(2000);
  
  
  motor1.run(RELEASE); // stop
  motor2.run(RELEASE);
  delay(3000);
  
  
  
  
  }


