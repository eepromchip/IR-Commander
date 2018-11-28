#include <Arduino.h>
#include <IRremote.h>

IRsend irsend ;
int pushButton = 2;


void setup( )
{
pinMode(pushButton, INPUT);
pinMode(LED_BUILTIN, OUTPUT);
//pushButton == LOW;
}

void loop( ) {
   if (pushButton == HIGH) {
      /* if the button is pushed */
      irsend.sendNEC(0x20DF10EF, 32); // This command is  POWER for Vizio
      irsend.sendNEC(0x61A0F00F, 32); // This command is POWER for Insignia
         digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
         delay(1000);
         digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
         delay(1000);                       // wait for a second

      //insert BT Soundbar power command here

   } else {

   }



}
