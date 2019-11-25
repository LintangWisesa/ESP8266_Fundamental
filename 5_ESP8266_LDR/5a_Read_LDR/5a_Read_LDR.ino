void setup(){
    Serial.begin(115200);
}

void loop(){
    int analog = analogRead(A0);
    float volt = analog * (3.3 / 1023.0);

    Serial.print("Analog: ");
    Serial.print(analog);
    Serial.print(" / Voltage: ");
    Serial.println(volt);
    delay(1000);  
}