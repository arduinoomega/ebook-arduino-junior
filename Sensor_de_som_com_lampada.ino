int rele = 3; // Definindo que o Relé está na porta digital 3
int sensor = 2; // Definindo que o Sensor está na porta digital 2

int estadoSensor; // Variável que armazena o valor da leitura do sensor  

void setup () { // inicia o void setup

pinMode(rele, OUTPUT); // Define o Relé como saída  
pinMode(sensor, INPUT); // Define Sensor como entrada

digitalWrite(rele,HIGH); // o relé inicia desligado

}

void loop () { // incia o void loop 
  
  if (digitalRead(sensor) == HIGH){ // Se a leitura do Sensor for igual a HIGH (alto)
    
      estadoSensor = digitalRead(rele); // Lê o estado atual do Relé e armazena
      
    digitalWrite(rele, !estadoSensor); // Muda o estado do Relé, ou seja, o Relé é acionado 
      
      delay(500); // Tempo de 500 milissegundos
  }
}
