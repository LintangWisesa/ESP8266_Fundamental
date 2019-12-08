#define BYLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

char ssid[] = "Lintang";
char pass[] = "lintang2611";
char token[] = "aBzl6CwJ_Y1axyQ_9V3zM56To5ttMc__";
Servo servobiru;

// on Blynk app, create slider that connect to pin V0: 0-180
BLYNK_WRITE(V0){
  servobiru.write(param.asInt());
}

void setup(){
  Serial.begin(115200);
  Blynk.begin(token, ssid, pass);
  servobiru.attach(D5);
}

void loop(){
  Blynk.run();
}
