/*

Display messages on the LCD screen in the kiosk using the LiquidCrystal Library.
http://www.arduino.cc/en/Tutorial/LiquidCrystal

*/

void lcdPrint(int row, int cell, String message){
lcd.setCursor(cell,row);
lcd.print(message);
}

void lcdPrint(int row, String message){
lcd.setCursor(0,row);
lcd.print(message);
}





