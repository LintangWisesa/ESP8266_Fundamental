void setup(){
    pinMode(D3, INPUT);
    pinMode(D5, OUTPUT);
}

void loop(){
    digitalWrite(D5, digitalRead(D3));  
}