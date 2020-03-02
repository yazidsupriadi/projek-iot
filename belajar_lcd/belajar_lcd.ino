#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  // put your setup code here, to run once: 
  lcd.init(); 
  lcd.setBacklight(HIGH);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Selamat Pagi !");
  lcd.setCursor(1,1);
  lcd.print("have a nice day!");
 }
