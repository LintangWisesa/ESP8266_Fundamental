void setup(){
    Serial.begin(115200);
    pinMode(D5, OUTPUT);
}

void loop(){
    int analog = analogRead(A0);
    float volt = analog * (3.3 / 1023.0);

    if(analog < 10){
        digitalWrite(D5, HIGH);
        Serial.println("Kondisi gelap, lampu dihidupkan!");
    }

    else {
        digitalWrite(D5, LOW);
        Serial.println("Kondisi terang, lampu dimatikan!");
    }  
}