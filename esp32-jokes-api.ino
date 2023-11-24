int analogPin = 34;

float val = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("Entering setup");
  pinMode(18, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);
}

void loop() {
  val = analogRead(analogPin);
  val = val*20.0/1023.0;
  Serial.print("Oxygen");
  Serial.print(val);
  Serial.println(" mg/L");
  delay(10);

  if(val<=0)
  {
    digitalWrite(15, LOW);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(16, LOW);
    digitalWrite(17, LOW);
  }
  else if(val<=4)
  {
    digitalWrite(15, LOW);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(16, LOW);
    digitalWrite(17, HIGH);
  }
  else if(val<=5.5)
  {
    digitalWrite(15, LOW);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(16, LOW);
    digitalWrite(17, HIGH);
    digitalWrite(18, HIGH);
  }
 
  else if(val<=8)
  {
    digitalWrite(15, LOW);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(16, HIGH);
    digitalWrite(17, HIGH);
    digitalWrite(18, LOW);
  }
  else if(val<=12)
  {
    digitalWrite(15, LOW);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(16, HIGH);
    digitalWrite(17, HIGH);
    digitalWrite(18, LOW);
  }
  else if(val<=16)
  {
    digitalWrite(15, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(16, HIGH);
    digitalWrite(17, HIGH);
    digitalWrite(18, LOW);
  }
  else if(val<=20)
  {
    digitalWrite(15, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(16, HIGH);
    digitalWrite(17, HIGH);
    digitalWrite(18, LOW);
  }

}