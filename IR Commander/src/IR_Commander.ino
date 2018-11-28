#include <Arduino.h>
#include <IRremote.h>

IRsend irsend ;
int pushButton = 2;

void setup( )
{
pinMode(pushButton, INPUT);
pushButton == LOW; 
}

void loop( ) {
   if (pushButton == HIGH) {
      /* if the button is pushed */
      irsend.sendNEC(0x20DF10EF, 32); // This command is  POWER for Vizio
      irsend.sendNEC(0x61A0F00F, 32); // This command is POWER for Insignia
      //insert BT Soundbar power command here

   } else {

   }



}
