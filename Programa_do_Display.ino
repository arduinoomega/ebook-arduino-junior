// Incluindo bibliotecas necessárias 

#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE); 
 
void setup(){ // inicia o void setup
  
 lcd.begin (16,2); // Dimensão da tela 
 lcd.setBacklight(HIGH); //Liga a luz de fundo
}
 
void loop(){ // inicia o void loop
  
 lcd.setCursor(0,0); // coluna 0, linha 0
 lcd.print("Texto"); // Insira seu texto Aqui, dentro das Aspas
  delay(5000); // Espera de 5 segundos

 lcd.clear(); // apaga o texto escrito no Display

 lcd.setCursor(0,0); // coluna 0, linha 0
 lcd.print("Texto"); // Insira seu texto aqui, dentro das Aspas

 delay(5000); // Espera de 5 segundos
 lcd.clear(); // apaga o texto escrito no Display
}
