#include <Arduino.h>
#include "sensorUmidadeSolo.h"
#include "managerWifi.h"

    
void setup() {
Serial.begin(9600);
managerWiFiInit();
}

void loop() {
managerWiFiCheckButton();
}