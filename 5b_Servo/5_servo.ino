#include <Servo.h>
Servo Servoku;

void setup(){
  Servoku.attach(D5);
  Servoku.write(0);
  delay(1000);
}

void loop(){
  Servoku.write(0);
  delay(1000);
  Servoku.write(180);
  delay(1000);
}
