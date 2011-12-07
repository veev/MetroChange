/*

 Display messages on the LCD screen in the kiosk using the LiquidCrystal Library.
 
 */

void lcdPrint(int row, int cell, String message){
  lcd.setCursor(cell,row);
  lcd.print(message);
}

void lcdPrint(int row, String message){
  lcd.setCursor(0,row);
  lcd.print(message);
}

void beep(){
  unsigned long currentMillis = millis(); 
  if(currentMillis - previousMillis > interval) {
    previousMillis = currentMillis;   
    if (beepState == LOW)
      beepState = HIGH;
    else
      beepState = LOW;
    digitalWrite(beepPin, beepState);
  }
}








