// Incluindo bibliotecas necessárias

#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE); 

int sensor = A0; // O pino do sensor está na porta analógica A0

float temperatura = 0; // Variável do tipo float
               
void setup (){
  
 pinMode(sensor,INPUT); // Definindo o sensor como saida 
 

 lcd.begin (16,2); // Dimensão da tela 
 lcd.setBacklight(HIGH); //Liga a luz de fundo
}
 
void loop(){
  
temperatura = (analogRead(sensor) * 0.0048828125 * 100); // Lendo sensor 
 
lcd.setCursor(6,0);
lcd.print(temperatura); // imprime na tela o valor da temperatura 
lcd.setCursor(0,0);
lcd.print("TEMP:"); // imprime o texto
lcd.setCursor(11,0);


delay(2000); //INTERVALO DE 2 SEGUNDOS
 }
