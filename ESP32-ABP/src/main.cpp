#include "heltec.h"
#include <Arduino.h>

void setup() { 
   //WIFI Kit series V1 not support Vext control
  Heltec.begin(true /*DisplayEnable Enable*/, true /*Heltec.Heltec.Heltec.LoRa Disable*/, true /*Serial Enable*/, true /*PABOOST Enable*/, BAND /*long BAND*/);
 
  Heltec.display->init();
  Heltec.display->setFont(ArialMT_Plain_10);
  delay(1500);
  Heltec.display->clear();
  
  Heltec.display->drawString(0, 0, "LoRa Iniciado!");
  Heltec.display->drawString(0, 10, "Esprendo Dados...");
  Heltec.display->display();
  delay(1000);
  //LoRa.onReceive(cbk);
  LoRa.receive();
}


