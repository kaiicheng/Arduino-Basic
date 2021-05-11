void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

char light;
void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available())
    light=Serial.read();
  if(light=='+')
  {
    digitalWrite(13,HIGH);
  }
  else if(light=='-')
  {
    digitalWrite(13, LOW);
  }
  light=' ';
}
