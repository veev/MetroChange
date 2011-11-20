



void smsCheck(){

  //If a character comes in from the cellular module...
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
  }

}


