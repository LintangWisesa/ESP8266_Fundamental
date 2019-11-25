#include "ESP8266WiFi.h"

void setup() {
  Serial.begin(115200);
  delay(100);
}

void loop() {
  Serial.println("Mulai memindai WiFi");
  int n = WiFi.scanNetworks();
  Serial.println("Pemindaian selesai");
  if (n == 0)
    Serial.println("Tidak ada WiFi");
  else
  {
    Serial.print(n);
    Serial.println(" WiFi ditemukan");
    for (int i = 0; i < n; ++i)
    {
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" (");
      Serial.print(WiFi.RSSI(i));
      Serial.print(" dBm) ");
      Serial.print(2 * (WiFi.RSSI(i) + 100));
      Serial.println("% ");
      delay(10);
    }
  }
  Serial.println("");
  delay(5000);
}


/*
- SSID Service Set IDentifier alias nama access point WiFi
- RSSI Received Signal Strength Indicator (dBm - desibel miliwatt)
- Kualitas kuat WiFi = 2 * (dBm + 100) 
*/