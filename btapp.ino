#include<SoftwareSerial.h>
SoftwareSerial myBT(2,3);//crisscross
int led = 12;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
myBT.begin(9600);
digitalWrite(led,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

if(myBT.available())
{
  char c = myBT.read();
  if(c == '1')
  {
    digitalWrite(led,HIGH);
    myBT.write("The led is ON!");
  }
  if(c == '2')
  {
    digitalWrite(led,LOW);
    myBT.write("The led is OFF!");
  }
}
}
