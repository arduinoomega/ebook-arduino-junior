int botao = 2; // Declaramos que o botão está na porta digital 2
int ledVerde = 3;   // Declaramos que o LED está na porta digital 3
int ledAmarelo = 4;   // Declaramos que o LED está na porta digital 4
int ledVermelho = 5;   // Declaramos que o LED está na porta digital 5

int estadoBotao = 0; //Variável com os estados do botão (0 LOW, 1 HIGH).

void setup () { // inicia o void setup 
  
pinMode(ledVerde,OUTPUT);  //Definindo o LED como  saída
pinMode(ledAmarelo,OUTPUT);  //Definindo o LED como  saída
pinMode(ledVermelho,OUTPUT);  //Definindo o LED como  saída

pinMode(botao,INPUT); //Definindo o botão como entrada 

} // encerra o void setup 

void loop () {  // Inicia void loop 

estadoBotao = digitalRead(botao); //Lendo o estado do botão, constante botao, e atribuindo o resultado a variável estadoBotao.         
  
  if (estadoBotao == HIGH) { // Se o botão estiver pressionado o semáforo funciona normalmente 

  digitalWrite(ledVerde, HIGH); // LED Verde Liga
  digitalWrite(ledVermelho, LOW); // LED Vermelho desliga
  
  delay(2000); // tempo de 2 segundos
  
  digitalWrite(ledAmarelo, HIGH); // LED Amarelo Liga
  digitalWrite(ledVerde, LOW); // LED Verde desliga
  delay(1000); // tempo de 1 segundos
  
  digitalWrite(ledVermelho, HIGH); // LED Vermelho Liga
  digitalWrite(ledAmarelo, LOW); // LED Amarelo desliga
  
  delay(2000); // tempo de 2 segundos
    
  } else { // Se o botão não estiver pressionado o LED amarelo fica piscando 

  digitalWrite(ledVermelho, LOW); // LED Vermelho desliga
  digitalWrite(ledVerde, LOW); // LED Verde desliga

  digitalWrite(ledAmarelo,HIGH);  // LED amarelo liga    

delay(500); // tempo de meio segundo

  digitalWrite(ledAmarelo, LOW); // LED amarelo desliga

delay(500); // tempo de meio segundo 
    
  }       
}
