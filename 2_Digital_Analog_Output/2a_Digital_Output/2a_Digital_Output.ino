void setup(){
  pinMode(D5, OUTPUT);
}

void loop(){
  digitalWrite(D5, HIGH);
  delay(1000);
  digitalWrite(D5, LOW);
  delay(1000);  
}

