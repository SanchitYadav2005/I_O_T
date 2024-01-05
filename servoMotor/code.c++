#include <Servo.h>

Servo myservo;

int pos = 0;
int LEDpin = 7;
void setup()
{
  myservo.attach(9);
  pinMode(LEDpin, OUTPUT);
}

void loop()
{
  for (pos = 0; pos<=180; pos+=1){
   myservo.write(pos);
    digitalWrite(LEDpin, LOW);
    delay(15);
  }
  for (pos = 180; pos>=0; pos-=1){
  	myservo.write(pos);
    digitalWrite(LEDpin, HIGH);
    delay(15);
  }
}