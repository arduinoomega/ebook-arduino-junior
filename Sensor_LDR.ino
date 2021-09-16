int led = 4; // Definindo que o LED  está na porta digital 4

int sensor = A0; // Definindo que o Sensor está na porta analógica A0

int valorsensor = 0;// Variável que armazena o valor da leitura do sensor          

void setup() { // inicia o void setup

Serial.begin(9600); // Inicia a comunicação serial na velocidade de 9600

pinMode (led, OUTPUT); //Define LED como saída  
  pinMode (sensor, INPUT); //Define sensor como entrada  
  
}

void loop() { // Inicia o void loop

  Serial.println(valorsensor); // Imprimi o valor do sensor no monitor serial
  
   valorsensor = analogRead (sensor);// Faz a leitura analógica da porta em que o Sensor esta conectado
   
   if((valorsensor) < 300){ //Se o valor de valor do sensor for menor que 300
    digitalWrite(led, HIGH);// O LED acende
  }  
  else{ // Se não
     
    digitalWrite(led, LOW);//O LED fica apagado
  }  
}
