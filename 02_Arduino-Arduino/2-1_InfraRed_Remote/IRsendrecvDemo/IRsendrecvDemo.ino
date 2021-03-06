/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>

IRsend irsend;

void setup()
{
  Serial.begin(9600);
}

void loop() {

    for (int i = 0; i < 255; i++) {
      //irsend.sendSony(0xa90+i , 12); // Sony TV power code
      irsend.sendRC5(i , 12); // Sony TV power code
      delay(40);
    }
  
}
