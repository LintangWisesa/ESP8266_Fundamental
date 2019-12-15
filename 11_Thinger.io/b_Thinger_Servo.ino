#include <ESP8266WiFi.h>
#include <ThingerESP8266.h>
#include <Servo.h>

#define USERNAME "Lintang_Wisesa"
#define DEVICE_ID "lintangesp8266"
#define DEVICE_CRED "lintang13579"
#define WIFI "Purwadhika3"
#define PASS "Purwadhika3"

ThingerESP8266 thing(USERNAME, DEVICE_ID, DEVICE_CRED);
Servo myServo;

void setup(){
  pinMode(D5, OUTPUT);
  myServo.attach(D7);
  myServo.write(0);
  thing.add_wifi(WIFI, PASS);
  thing["myled"] << digitalPin(D5);
  thing["mypot"] >> outputValue(analogRead(A0));
  thing["myServo"] << [](pson& in){
    if(in.is_empty()){
      in = 0;
    } else {
      myServo.write((int)in);
    }
  };
}

void loop(){
    thing.handle();
}