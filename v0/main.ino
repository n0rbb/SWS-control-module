//Script for Teensy 4.0 

#include "LiquidCrystal.h"
#include "clearScreen.h"

int switchPin = 8;


LiquidCrystal lcd1(2, 3, 4, 5, 6, 7); //LCD 1: MIXER FREQ MEASUREMENT
LiquidCrystal lcd2(1, 12, 16, 17, 9, 10); //LCD 2: LOCAL OSCILLATOR FREQ



void setup() {
  //Serial.begin(9600);
  pinMode(switchPin, INPUT_PULLUP);

  lcd1.begin(16, 2);
  lcd1.setCursor(0, 0);
  lcd1.print("F(Hz):");
  lcd1.setCursor(0, 1);
  lcd1.print("Count:");

  lcd2.begin(16, 2);
  lcd2.setCursor(0, 0);
  lcd2.print("Set kHz:");
  lcd2.setCursor(0, 1);
  lcd2.print("LO kHz:");

}

void loop() {
  int switchVal = digitalRead(switchPin);
  if (switchVal == HIGH){ //BUTTON IS NOT PRESSED
    clearScreen(lcd1, 0, 0);
    clearScreen(lcd1, 0, 1);

    lcd2.setCursor(0, 0);
    lcd2.print("ESTADO DE MEDIDA");
    lcd2.setCursor(0, 1);
    lcd2.print("                ");
  }
  else{
    lcd1.setCursor(0, 0);
    lcd1.print("ESTADO DE CTRL");
    lcd1.setCursor(0, 1);
    lcd1.print("                ");

    clearScreen(lcd2, 0, 0);
    clearScreen(lcd2, 0, 1);
    
  }
}




