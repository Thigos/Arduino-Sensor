// C++ code
//
void setup()
{
  pinMode(A2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int val = analogRead(A2);
  if(val > 85){
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  }else{
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  }
}
