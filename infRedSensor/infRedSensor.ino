// C++ code
//
void setup()
{
  pinMode(A4, INPUT);
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
  pinMode(A3, INPUT);
  pinMode(A3, OUTPUT);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void loop()
{
  if (digitalRead(2) == 1) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } else {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }
}
