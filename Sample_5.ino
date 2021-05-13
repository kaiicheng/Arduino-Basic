#include<Servo.h>
Servo myServo;
void setup()
{
  // put your setup code here, to run once:
  myServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<180; i++)
  {
    myServo.write(100);  /*50=> fast, 100=>slow*/
    delay(20);
  }
}
