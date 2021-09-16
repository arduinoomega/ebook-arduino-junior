int led = 4; // Declaramos que o LED está na porta digital 4
int botao = 3; // Declaramos que o botão está na porta digital 3
int estadoBotao = 0; // Variável com os estados do botão (0 LOW, 1 HIGH)

void setup () { // inicia o void setup 

pinMode(led,OUTPUT); //Definindo o LED como saída
pinMode(botao,INPUT); //Definindo o botão como entrada 
 
} // encerra o void setup 

void loop () { // Inicia void loop 

 //Lendo o estado do botão, constante botao, e atribuindo o resultado a variável estadoBotao.

estadoBotao = digitalRead(botao);         
  
if (estadoBotao == HIGH) { // Se o botão estiver pressionado 
digitalWrite(led,HIGH); // O LED liga 

 } else { // Se o botão não estiver pressionado 
 
 digitalWrite(led,LOW); // LED desligado 
 
 } 
}
