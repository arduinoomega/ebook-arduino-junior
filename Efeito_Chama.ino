int led1 = 9;
int led2 = 10;
int led3 = 11;
 
void setup() {

// Declarando os LEDs como Saídas Digitais
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop()  {

  // loop principal envia um valor aleatório entre 0 e 120 e adicionamos 135 a esse valor para obtermos o brilho do LED nos pinos PWM 9, 10 e 11.

  analogWrite(led1,random(120)+136);
  analogWrite(led2,random(120)+136);
  analogWrite(led3,random(120)+136);
   // Delay com valor aleatório entre 0 e 100ms
   
  delay(random(100));
}
