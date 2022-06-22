// C++ code
//
#define echoPin A1
#define trigPin A0
#define pinoBuzzer 2

void setup(){
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(pinoBuzzer, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  float duration = pulseIn(echoPin, HIGH);
  int distancia= duration*0.034/2; //cm
  
  if(distancia <= 40){
    tone(pinoBuzzer,1500);
  }else{
    noTone(pinoBuzzer);
  }
  delay(500);
}
