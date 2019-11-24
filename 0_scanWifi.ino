#include "ESP8266WiFi.h"

void setup(){
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  Serial.println("Setup done!");
}

void loop(){
  Serial.println("Scan Start");
  int n = WiFi.scanNetworks();
  Serial.println("Scan Done");
  if (n == 0){
    Serial.println("No networks found");
  } else {
    Serial.print(n); Serial.println(" networks found");
    for(int i=0; i<n; ++i){
      Serial.print(i+1); Serial.print(". "); 
      Serial.print(WiFi.SSID(i)); // Service Set Identifier
      Serial.print(i+1); 
      Serial.println(WiFi.RSSI(i)); // Received Signal Strength Indicator
      delay(10);
    }
  }
  Serial.println(""); delay(5000);
}
