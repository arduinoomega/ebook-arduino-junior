int led = 3; // Definindo que o LED está na porta digital 3
int sensor = 2; // Definindo que o Sensor está na porta digital 2

int estadoSensor; // Variável que armazena o valor da leitura do sensor  

void setup () { // inicia o void setup

pinMode(led, OUTPUT); // Define LED como saída  
pinMode(sensor, INPUT); // Define Sensor como entrada

}

void loop () { // incia o void loop 
  
  if (digitalRead(sensor) == HIGH){ // Se a leitura do Sensor for igual a HIGH (alto)
    
      estadoSensor = digitalRead(led); // Lê o estado atual do LED e armazena
      
    digitalWrite(led, !estadoSensor); // Muda o estado do LED, ou seja, o LED acende 
      
      delay(500); // Tempo de 500 milissegundos
  }
}
