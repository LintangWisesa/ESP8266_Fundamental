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
  pinMode(D5, OUTPUT);
  digitalWrite(D5, LOW);
  web += "<h1>Hello World!</h1><a href=\"/on\"><button>LED ON</button></a><a href=\"/off\"><button>LED OFF</button></a>";
  
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
    server.send(200, "text/html", web);
    digitalWrite(D5, HIGH);
  });
  
  server.on("/off", [](){
    server.send(200, "text/html", web);
    digitalWrite(D5, LOW);
  });
  
  server.begin();
}

void loop(){
  server.handleClient();
}