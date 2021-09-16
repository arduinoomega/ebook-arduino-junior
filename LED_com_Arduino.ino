int LedVermelho = 3; // Declaramos que o LED está na porta digital 3

void setup () {  // inicia o void setup 

pinMode(LedVermelho, OUTPUT); // configurando o LED  Vermelho como uma saída
 
} // encerra o void setup 

void loop () { // inicia o void loop 

digitalWrite(LedVermelho, HIGH); // Comando para o LED Vermelho ligar 

delay(2000); // Espera o tempo de 2 segundos

digitalWrite(LedVermelho, LOW); // Comando para o LED Vermelho deligar

delay(2000); // Espera o tempo de 2 segundos

} // encerra a programação 
