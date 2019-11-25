#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

const char *ssid = "LintangWiFi";
const char *password = "123456789abcde";  // must be 8-32 char
ESP8266WebServer server(80);

void test(){
  server.send(200, "text/html", "<h1>Welcome</h1>");
}

void setup(){
  delay(2000);
  Serial.begin(115200);
  Serial.print("Configure access point...");
  WiFi.softAP(ssid, password);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("IP: "); Serial.println(myIP);
  server.on("/", test);
  server.begin();
}

void loop(){
  server.handleClient();
}