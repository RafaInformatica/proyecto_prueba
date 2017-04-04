int verdePin = 11;
int azulPin = 10;
int rojoPin = 9;
 
void setup()
{
  pinMode(rojoPin, OUTPUT);
  pinMode(verdePin, OUTPUT);
  pinMode(azulPin, OUTPUT);  
}
 
void loop()
{
  analogWrite(rojoPin, 255);
}
