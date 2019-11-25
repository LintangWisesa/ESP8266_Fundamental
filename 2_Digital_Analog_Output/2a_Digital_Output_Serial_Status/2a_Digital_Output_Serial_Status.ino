void setup(){
  Serial.begin(115200);
  pinMode(D5, OUTPUT);
}

void loop(){
  digitalWrite(D5, HIGH);
  Serial.println('Lampu Nyala');
  delay(1000);
  digitalWrite(D5, LOW);
  Serial.println('Lampu Mati');
  delay(1000);  
}

