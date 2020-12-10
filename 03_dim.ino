int val = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(A0);
  val = val / 4;
  Serial.write(val);
}
