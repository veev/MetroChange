#include <NewSoftSerial.h>  //Include the NewSoftSerial library to send serial commands to the cellular module.
#include <string.h>         //Used for string manipulations

char incoming_char=0;      //Will hold the incoming character from the Serial Port.

NewSoftSerial cell(2,3);  //Create a 'fake' serial port. Pin 2 is the Rx pin, pin 3 is the Tx pin.



void setup()
{
  //Initialize serial ports for communication.
  Serial.begin(9600);
  cell.begin(9600);

  //Let's get started!
  Serial.println("Starting SM5100B Communication...");
}



void loop() {
smsCheck();
}
