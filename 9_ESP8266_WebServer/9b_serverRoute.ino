#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

MDNSResponder mdns;
const char* ssid = "Lintang";
const char* password = "lintang2611";
ESP8266WebServer server(80);
String web = "";

void setup(){
  web += "<h1>Hello World!</h1><button>Click me!</button>";
  
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED){
    delay(500); Serial.print(".");
  };
  Serial.println("Connected!");
  Serial.println(WiFi.localIP());

  server.on("/", [](){
    server.send(200, "text/html", web);
  });

  server.on("/on", [](){
    server.send(200, "text/html", "<h3>Ke route /on</h3>");
  });
  
  server.on("/off", [](){
    server.send(200, "text/html", "<h3>Ke route /off</h3>");
  });
  
  server.begin();
}

void loop(){
  server.handleClient();
}