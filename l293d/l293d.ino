// C++ code
//
#define PinoVel 5
#define Entrada1 6
#define Entrada2 4
#define botao1 10
#define botao2 9

int rotacao = 1;

void setup()
{
  pinMode(PinoVel, OUTPUT);
  pinMode(Entrada1, OUTPUT);
  pinMode(Entrada2, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
}

void loop()
{
  int velocidade = 500;
  analogWrite(PinoVel, velocidade); 
  if(digitalRead(botao1) == 1){
    rotacao = 1;
  }else if(digitalRead(botao2) == 1){
    rotacao = 0;
  }
  
  if(rotacao == 1){
    digitalWrite(Entrada1, HIGH); 
    digitalWrite(Entrada2, LOW); 
  }else if(rotacao == 0){
    digitalWrite(Entrada1, LOW); 
    digitalWrite(Entrada2, HIGH); 
  }
}
