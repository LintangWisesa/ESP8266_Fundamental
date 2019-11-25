void setup(){
  Serial.begin(115200);
  pinMode(D5, OUTPUT);
}

void loop(){
  Serial.println('');
  for(int i=0; i<256; i++){
    analogWrite(D5, i);
    Serial.print('#');
    delay(10);
  }
}

