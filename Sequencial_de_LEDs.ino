int LedVerde = 3; // Declaramos que o LED está na porta digital 3
int LedAmarelo = 4; // Declaramos que o LED está na porta digital 4
int LedVermelho = 5; // Declaramos que o LED está na porta digital 5
int LedAzul = 6; // Declaramos que o LED está na porta digital 6


void setup () {  // inicia o void setup 

pinMode(LedVerde, OUTPUT); // definando o Led Verde como uma saída 
pinMode(LedAmarelo, OUTPUT); // definando o Led Amarelo como uma saída 
pinMode(LedVermelho, OUTPUT); // definando o Led Vermelho como uma saída 
pinMode(LedAzul, OUTPUT); // definando o Led Azul como uma saída 


}  // encerra o void setup 

void loop () { // inicia o void loop 

digitalWrite(LedVerde, HIGH); // Comando para o LED Verde ligar 

delay(1000); // Espera o tempo de 1 segundos

digitalWrite(LedAmarelo, HIGH); // Comando para o LED Amarelo ligar 

delay(1000); // Espera o tempo de 1 segundos

digitalWrite(LedVermelho, HIGH); // Comando para o LED Vermelho ligar 

delay(1000); // Espera o tempo de 1 segundos

digitalWrite(LedAzul, HIGH); // Comando para o LED Azul ligar 

delay(1000); // Espera o tempo de 1 segundos

} // encerra a programação 
