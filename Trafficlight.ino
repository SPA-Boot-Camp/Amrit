int led=12;
int led1=13;
int led2=10;
void setup()
{ 
 pinMode(led,OUTPUT);
}
void loop()
{
  redLED();
  greenLED();
  yellowLED();
  
}
void redLED()
{
  digitalWrite(led,HIGH);
  delay(4000);
  digitalWrite(led,LOW);
  delay(4000);
}
void greenLED()
{
  digitalWrite(led1,HIGH);
  delay(3000);
  digitalWrite(led1,LOW);
  delay(3000);
}
void yellowLED()
{
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
}
