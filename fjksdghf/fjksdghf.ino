//Include the Servo library
#include <Servo.h>
//Declare the Servo pin
int yServoPin = 2;
int xServoPin = 3;
//Creat a servo object
Servo ServoX, ServoY;
int mn = 60, mx = 120;
void setup() {
  // We need to attach the servo to the used pin number
  ServoX.attach(xServoPin);
  ServoY.attach(yServoPin);

}

void loop() {
  // Make servvo go to 0 degrees
  for(int i=mn ; i < mx ; ++i){
    ServoX.write(i); //tall servo to go to position in variable 'i'
    ServoY.write(i); //tall servo to go to position in variable 'i'
    delay(60);   // waits 40ms for the servo to reach the position
    
  }
 
  for(int i=mx ; i > mn ; --i){
    ServoX.write(i);
    ServoY.write(i);
    delay(60);
   
  }
}
