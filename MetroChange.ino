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
 Ethernet Library - http://www.arduino.cc/en/Reference/Ethernet
 
 MetroChange uses code from/was informed by these sources:
 SM5100B-D example code and reference by Ryan Owens - http://www.sparkfun.com/products/9607
 Tronix Celluar Shield Tutorial - http://tronixstuff.wordpress.com/2011/01/19/tutorial-arduino-and-gsm-cellular-part-one/
 Blink without Delay (for piezo buzzer) - http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 
 */

//include libraries
//#include <NewSoftSerial.h>  //Include the NewSoftSerial library to send serial commands to the GSM module.
#include <LiquidCrystal.h>  //Used to display things on an LCD screen
#include <SPI.h>
#include <Ethernet.h>
#include <EthernetClient.h>

//create objects and variables
char incoming_char=0;      //Will hold the incoming character from the Serial Port.
//NewSoftSerial cell(7,1);  //Create a 'fake' serial port. Pin 2 is the Rx pin, pin 3 is the Tx pin.
LiquidCrystal lcd(52, 50, 47, 51, 49, 53); //changed from 12, 11 to 9,8 as the ethernet uses 10-13
char mobilenumber[] = "+14155992671";  // Twilio sandbox number
String TwilioPin = "32456071"; //Twilio Pin
const int beepPin = 48;
int beepState = LOW;             // ledState used to set the LED
long previousMillis = 0;        // will store last time LED was updated
long interval = 300;

//Ethernet
byte mac[] = {
  0x90, 0xA2, 0xDA, 0x00, 0x7E, 0xD5 };
IPAddress ip(128,122,151,135);

//Pin References
/*
buzzer
 lcd
 
 
 */


void setup()
{
  pinMode(beepPin,OUTPUT);

  /*Load configuration variables from MetroChange_Config.pde to set these vars:
   phoneNumber
   */

  /*SMS
   cell.begin(9600);
   Serial.begin(9600);
   delay(35000); // give the GSM module time to initialise, locate network etc.
   */

  // LCD
  lcd.begin(16, 2);
  lcdPrint(0,"Welcome to");
  lcdPrint(1,"MetroChange");

  // initialize serial:
  Serial.begin(9600);


}


void loop() { 
//beep();


//beep();
  


  /*If a character comes in from the cellular module...
   if(cell.available() >0)
   {
   incoming_char=cell.read();    //Get the character from the cellular serial port.
   Serial.print(incoming_char);  //Print the incoming character to the terminal.
   }
   //If a character is coming from the terminal to the Arduino...
   if(Serial.available() >0)
   {
   incoming_char=Serial.read();  //Get the character coming from the terminal
   cell.print(incoming_char);    //Send the character to the cellular module.
   }*/
}
















