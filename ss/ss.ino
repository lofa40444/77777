#include <LiquidCrystal.h>

char c;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
void setup() {
  lcd.begin(16, 2);   // set up the LCD's number of columns and rows: 
  Serial.begin(9600);

}
void loop() {
  if(Serial.available() > 0)
  {
     c = Serial.read();  
  
    lcd.write(Serial.read()); 
   
   

  }
}
