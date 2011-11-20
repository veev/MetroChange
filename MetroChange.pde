/*

 
 MetroChange - November 2011
 
 *** About this Project ***
 
 A charity donation platform using the MTA Metrocard. For more information see http://blog.metrochange.org
 
 Stepan Boltalin
 Genevieve Hoffman
 Paul May
 
 *** References and Thanks ***
 
 MetroChange uses these libraries:
 NewSoftSerial Library by Mikal Hart - http://arduiniana.org/libraries/newsoftserial/
 LiquidCrystal Library - http://arduino.cc/en/Reference/LiquidCrystal
 
 MetroChange uses code from/was informed by these sources:
 SM5100B-D example code and reference by Ryan Owens - http://www.sparkfun.com/products/9607
 
 
 */

//include libraries
#include <NewSoftSerial.h>  //Include the NewSoftSerial library to send serial commands to the GSM module.
#include <string.h>         //Used for string manipulations
#include <LiquidCrystal.h>  //Used to display things on an LCD screen

//create objects and variables
char incoming_char=0;      //Will hold the incoming character from the Serial Port.
NewSoftSerial cell(2,3);  //Create a 'fake' serial port. Pin 2 is the Rx pin, pin 3 is the Tx pin.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//Pin References
/*
buzzer
 lcd
 
 
 */


void setup()
{

  /*Load configuration variables from MetroChange_Config.pde to set these vars:
   phoneNumber
   */
 
  

  //SMS
  Serial.begin(9600);
  cell.begin(9600);
  Serial.println("Starting SM5100B Communication...");


  //LCD
  lcd.begin(16, 2);
  lcdPrint(0,"hello");
  lcdPrint(1,"world");



}


void loop() {
  //smsCheck();
}



