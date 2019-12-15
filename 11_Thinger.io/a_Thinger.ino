// only for TLS connection problem
// #define _DISABLE_TLS_
#include <ESP8266WiFi.h>
#include <ThingerESP8266.h>
#define USERNAME "Lintang_Wisesa"
#define DEVICE_ID "lintangesp8266"
#define DEVICE_CRED "lintang13579"
#define WIFI "Purwadhika3"
#define PASS "Purwadhika3"
ThingerESP8266 thing(USERNAME, DEVICE_ID, DEVICE_CRED);

void setup(){
  pinMode(D5, OUTPUT);
  thing.add_wifi(WIFI, PASS);
  thing["myled"] << digitalPin(D5);
  thing["mypot"] >> outputValue(analogRead(A0));
}

void loop(){
    thing.handle();
}