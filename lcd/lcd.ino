//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  
}


void loop()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
 
  // Print a message to the LCD.
  lcd.setBacklight(HIGH);
  lcd.setCursor(1,0);
  lcd.print("Hello, world!");
  lcd.setCursor(1,1);
  lcd.print("Hello, world!");
  
  for(int i = 0; i < 16; i++){
    lcd.scrollDisplayLeft();
    delay(500);
      
    }
  
}
