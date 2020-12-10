void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  if(digitalRead(13) == LOW) {
    Serial.write(1);
    digitalWrite(12, LOW);
    
  }
  else {
    Serial.write(0);
    delay(1100);
    digitalWrite(12, HIGH);
  }
}
