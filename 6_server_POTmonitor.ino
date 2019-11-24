#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

MDNSResponder mdns;
const char* ssid = "Lintang";
const char* password = "lintang2611";
ESP8266WebServer server(80);
int pot;

void setup(){
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED){
    delay(500); Serial.print(".");
  };
  Serial.println("Connected!");
  Serial.println(WiFi.localIP());

  server.on("/", handle_OnConnect);
  
  server.begin();
}

void loop(){
  server.handleClient();
}

void handle_OnConnect(){
  pot = analogRead(A0);
  server.send(200, "text/html", web(pot));
}

String web(int pot){
  String web1 = "<head><meta http-equiv=\"refresh\" content=\"1\"/></head>";
  web1 += "<body><h1>Hello World!</h1><b>Nilai potensio: ";
  web1 += String(pot) + "</b></body>";
  return web1;
}

