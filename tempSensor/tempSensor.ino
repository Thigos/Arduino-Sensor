// C++ code
void setup()
{
  pinMode(A0, INPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int leitura = analogRead(A0);
  float volt = leitura * (5.0 / 1024.0);
  float temperatura = (volt - 0.5) * 100;
  
  if(temperatura < 1){
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
  }else if(temperatura < 40){
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
  }else if(temperatura > 40){
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
  }
}
