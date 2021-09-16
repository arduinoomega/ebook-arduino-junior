int led  = 2; // Definindo que o LED Vermelho 1 está na porta digital 2
int led2 = 3; // Definindo que o LED Vermelho 2 está na porta digital 3
int led3 = 4; // Definindo que o LED Vermelho 3 está na porta digital 4
int led4 = 5; // Definindo que o LED Amarelo 1 está na porta digital 5
int led5 = 6; // Definindo que o LED Amarelo 2 está na porta digital 6
int led6 = 7; // Definindo que o LED Amarelo 3 está na porta digital 7
int led7 = 8; // Definindo que o LED Verde 1 está na porta digital 8
int led8 = 9; // Definindo que o LED Verde 2 está na porta digital 9
int led9 = 10; // Definindo que o LED Verde 3 está na porta digital 10

int pot = A0; // Definindo que o Potenciômetro está na porta analógica A0

int valorpot = 0; // Variável que armazena o valor da leitura do potenciômetro

void setup(){ // Inicia o void setup

  // Definindo os LEDs como Saídas 
  
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);

  // Defininindo o Potenciômetro como Entrada

  pinMode(pot, INPUT);
}

void loop(){ // incia o void loop
 
valorpot = analogRead(pot); // Faz a leitura analógica da porta em que o potenciômetro esta conectado
  
valorpot = map(valorpot,0,1023,0,255); // transformando uma escala de 0-1023 em uma escala 0 a 255

  // Vamos dividir 255 pela quantidade de LEDs que temos, ou seja 9. 
  
  if (valorpot >= 28.3 ){ // Se o valor do potenciômetro for maior ou igual a 28.3
    
    digitalWrite(led, HIGH); // O primeiro LED se acende
    
  } else { // Se não 
    
    digitalWrite(led, LOW); // O primeiro LED permance apagado
  }
  
  if (valorpot >= 56.6 ){ // Se o valor do potenciômetro for maior ou igual a 56.6
    
    digitalWrite(led2, HIGH); // O primeiro LED se acende
    
  } else { // Se não 
    
    digitalWrite(led2, LOW); // O segundo LED permanece apagado
  }
  
  if (valorpot >= 84.9 ){ // Se o valor do potenciômetro for maior ou igual a 84.9
    
    digitalWrite(led3, HIGH); // O terceiro LED se acende
    
  } else { // Se não
    
      digitalWrite(led3, LOW); // O terceiro LED permanece apagado
  }

  if (valorpot >= 113.2 ){ // Se o valor do potenciômetro for maior ou igual a 113.2
    
    digitalWrite(led4, HIGH); // O quarto LED se acende
    
  } else { // Se não
    
    digitalWrite(led4, LOW); // O quarto LED permenece apagado

  }
  
  if (valorpot >= 141.5 ){ // Se o valor do potenciômetro for maior ou igual a 141.5
    
    digitalWrite(led5, HIGH); // O quinto LED se acende
    
  } else { // Se não
  
    digitalWrite(led5, LOW); // O quinto LED permanece apagado
  }
  
  if (valorpot >= 168.8 ){ // Se o valor do potenciômetro for maior ou igual a 168.8
    
    digitalWrite(led6, HIGH); // O sexto LED se acende
    
  } else { // Se não
    
    digitalWrite(led6, LOW); // O sexto LED permanece apagado
  }
  
  if (valorpot >= 198.1 ){ // Se o valor do potenciômetro for maior ou igual a 198.1
    
    digitalWrite(led7, HIGH); // O sétimo LED se acende
     } else { // Se não
    
    digitalWrite(led7, LOW); // O sétimo LED permanece apagado
  }
  
  if (valorpot >= 226.4 ){ // Se o valor do potenciômetro for maior ou igual a 226.4
    
    digitalWrite(led8, HIGH); // O oitavo LED se acende
    
  } else { // Se não
    
    digitalWrite(led8, LOW); // O oitavo LED permanece apagado
  }
  
  if (valorpot >= 255 ){ // Se o valor do potenciômetro for maior ou igual a 255
    
    digitalWrite(led9, HIGH); // O nono LED se acende
    
  } else { // Se não
    
    digitalWrite(led9, LOW); // O nono LED permanece apagado

}
}

 
