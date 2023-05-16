#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7); 
// pin numbers are as follows: lcd(RS, E, D4, D5, D6, D7)

void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello World!");
}

void loop() {
}
