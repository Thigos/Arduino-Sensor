// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float resistorVal = analogRead(A0) * (5.0/1024.0);
  if(resistorVal > 3){
    digitalWrite(3, HIGH);
  }else{
    digitalWrite(3, LOW);
  }
}
