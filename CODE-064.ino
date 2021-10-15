//VTM https://www.youtube.com/c/VTMVlogVoThongMinh
#include <Servo.h>
Servo myservo1, myservo2, myservo3, myservo4 ;
#define sensor 2
#define led 10
//......................................................
void setup()
{
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  myservo4.attach(9);
  myservo3.attach(8);
  myservo2.attach(7);
  myservo1.attach(6);
}
//......................................................
void loop()
{
  if (digitalRead(sensor) == 1)
  {
    Serial.println("Phat hien vat can");
    myservo4.write(0);
    myservo3.write(0);
    myservo2.write(0);
    myservo1.write(0);
    digitalWrite(led, HIGH);
  }
  else
  {
    Serial.println("KHONG phat hien vat can");
    myservo4.write(90);
    myservo3.write(90);
    myservo2.write(90);
    myservo1.write(90);
    digitalWrite(led, LOW);
  }
}
