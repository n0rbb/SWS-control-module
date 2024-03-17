#ifndef clearScreen_h
#define clearScreen_h
#include <Arduino.h>
#include "LiquidCrystal.h"

int clearScreen(LiquidCrystal &lcd, byte startCol, byte rowToClear);

#endif