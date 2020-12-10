void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT);
}

void loop() {
  while (digitalRead(13) == LOW) {
    Serial.write("tekst ");
    delay(1000);
  }
}
