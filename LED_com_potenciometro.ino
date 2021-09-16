int pot = A0; // Definindo que o Potenciômetro está na porta analógica A0
int led = 3; // Definindo que o LED está na porta digital 3

int valorPot = 0; // Variável que armazena o valor da leitura do potenciômetro

void setup () { // Inicia o Void setup

pinMode(led,OUTPUT); // Definindo o LED como saída

}

void loop () {  // Inicia o void loop
  
valorPot = analogRead(pot); // Faz a leitura analógica da porta em que o potenciômetro esta conectado

valorPot = map (valorPot,0,1023,0,255); // transformando uma escala de 0-1023 em uma escala 0 a 255

analogWrite(led,valorPot ); // Controla o brilho do LED de acordo com a leitura do potenciômetro

}
