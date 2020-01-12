#include <ESP8266WiFi.h>
WiFiClient client;
String MakerIFTTT_Key ;
;String MakerIFTTT_Event;
char *append_str(char *here, String s) {  int i=0; while (*here++ = s[i]){i++;};return 
here-1;}
char *append_ul(char *here, unsigned long u) { char buf[20]; return append_str(here, ultoa
(u, buf, 10));}
char post_rqst[256];char *p;char *content_length_here;char *json_start;int compi;

void setup(){
  Serial.begin(9600);
    WiFi.disconnect();
  delay(3000);
  Serial.println("start");
   WiFi.begin("namassidwifi","passwordwifi");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(3000);
    Serial.println(", , ,");
  }Serial.println("ok");
}

void loop(){
    client.connect("maker.ifttt.com",80);
    MakerIFTTT_Key ="iftttaccountkey";      // get from IFTTT's Webhook docs
    MakerIFTTT_Event ="ifttteventname";     // get from your applet
    p = post_rqst;
    p = append_str(p, "POST /trigger/");
    p = append_str(p, MakerIFTTT_Event);
    p = append_str(p, "/with/key/");
    p = append_str(p, MakerIFTTT_Key);
    p = append_str(p, " HTTP/1.1\r\n");
    p = append_str(p, "Host: maker.ifttt.com\r\n");
    p = append_str(p, "Content-Type: application/json\r\n");
    p = append_str(p, "Content-Length: ");
    content_length_here = p;
    p = append_str(p, "NN\r\n");
    p = append_str(p, "\r\n");
    json_start = p;
    p = append_str(p, "{\"value1\":\"");
    p = append_str(p, "Nilai ");
    p = append_str(p, "\",\"value2\":\"");
    p = append_str(p, "analog = ");
    p = append_str(p, "\",\"value3\":\"");
    p = append_str(p, String(analogRead(A0)));
    p = append_str(p, "\"}");
    compi= strlen(json_start);
    content_length_here[0] = '0' + (compi/10);
    content_length_here[1] = '0' + (compi%10);
    client.print(post_rqst);
    delay(10000);
    Serial.println("ifttt ok");
  Serial.println("start");
delay(10000);
}

// every 10s will post the data