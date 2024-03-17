#include <Arduino.h>
#include "LiquidCrystal.h"


int clearScreen(LiquidCrystal &lcd, byte startCol, byte rowToClear)
{
  lcd.setCursor(startCol, rowToClear);
  lcd.print("                ");  
  return 0;
}