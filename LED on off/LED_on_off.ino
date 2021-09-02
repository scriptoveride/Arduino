int LED = 5; // conect Led to arduino pin 5

void setup() {
  pinMode (LED, OUTPUT); // Led pin OUTPUT
}

void loop() {
  digitalWrite(LED, HIGH); // LED HIGH
  delay(400);
  digitalWrite(LED, LOW); // LED LOW
  delay(400);
}
