int led = 4;  //Declaramos que o LED está na porta digital 4
int botao = 3; //Declaramos que o LED está na porta digital 3
int estadoLED = 0; //Variável com os estados do LED (0 LOW, 1 HIGH).
 
void setup () // inicia o void setup
{
   pinMode(led, OUTPUT); // Definindo o LED como  saída
   pinMode(botao, INPUT); // Definindo o Botão como entrada 

} // encerra o void setup 

void loop ( ) { // Inicia void loop

 if (digitalRead(botao) == HIGH) // Se caso o botão for pressionado
 {
 estadoLED = !estadoLED; // o Estado do LED é alterado, ou seja o LED liga

 digitalWrite(led,estadoLED);
while(digitalRead(botao) == HIGH); // Equanto o botão não for pressionado novamete, o LED continua ligado

    delay(100); // Delay de 100 milissegundos 
  }    
}
