#include "IRremote.h"
#include "IRremoteInt.h"
 
IRsend irsend;
int pinButton = 2;
int valor_button;
 
void setup() {
  Serial.begin(9600);
  pinMode(pinButton,INPUT);
}
 
void loop() {
  valor_button = digitalRead(pinButton);

  if(valor_button == HIGH)
  {
  	// irsend.sendNEC(HEX CODE TO SEND, BITS);
    irsend.sendNEC(0xE0E040BF, 32);
    Serial.println("Enviado");
    delay(100);
  }
}
