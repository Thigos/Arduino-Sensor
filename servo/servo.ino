#include <Servo.h>

// C++ code
//
#define echoPin A1
#define trigPin A0
#define servoController 3

Servo servo;

void setup(){
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(servoController, OUTPUT);
  Serial.begin(9600);
  servo.attach(servoController);
  servo.write(0);
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
    servo.write(180);
  }else{
    servo.write(0);
  }
  delay(500);
}
