#include "ESP8266WiFi.h" 
 
void setup() {
  Serial.begin(115200);
} 
 
void loop() {
  delay(2000);
  WiFi.disconnect();
  Serial.println("Mulai menghubungkan");
  WiFi.begin("nama_wifi","password_wifi");
  while((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print("...");
  }
  Serial.println(WiFi.status());
  Serial.println("Terhubung");
  Serial.println("");
}