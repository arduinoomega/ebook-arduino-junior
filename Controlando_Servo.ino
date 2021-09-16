#include <Servo.h> // Incluindo a biblioteca
 
Servo servo; // Objeto do tipo Servo
 
int pot = A0; // Definindo que o Potenciômetro está na porta analógica A0

int servomotor = 3; // Definindo que o Servo Motor está na porta digital 3
 
int valorpot; // Variável que armazena o valor da leitura do potenciômetro          
  
void setup(){ // Inicia o void setup
  
  servo.attach(servomotor); // Associando o pino digital ao objeto servo
  pinMode(pot, INPUT); // Defininindo o Potenciômetro como Entrada
} 

void loop(){ // Inicia o void loop
  
  valorpot = analogRead(pot); //Lê o valor do potenciômetro
  valorpot = map(valorpot, 0, 1023, 0, 180); // transformando uma escala de 0-1023 em uma escala 0 a 180
  servo.write(valorpot); //Faz com que o servo se movimente de acordo com o valor do potenciômetro

  delay(1); 

}
