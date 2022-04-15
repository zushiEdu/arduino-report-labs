#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

String phrases[] = {"Hello World", "Arduino Lab"};

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.clear();
  
  lcd.print(phrases[0]);
  lcd.setCursor(0, 1);
  lcd.print(phrases[1]);
}

void loop() {

}
