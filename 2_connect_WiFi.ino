#include <ESP8266WiFi.h>
const char* ssid = "Lintang";
const char* password = "lintang2611";

void setup(){
  Serial.begin(115200);
  Serial.print("Connecting to "); Serial.println(ssid);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED){
    delay(500); Serial.print(".");
  }
  Serial.print("WiFi connected!");
}

void loop(){
  
}
