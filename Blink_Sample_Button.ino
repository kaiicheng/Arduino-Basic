int buttonPin=3;
int ledPin=7;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin)==HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
   else
   {
    digitalWrite(ledPin, LOW);
   }
}
