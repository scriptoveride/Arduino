int Button = 11;
int LED = 13;

void setup() {
  pinMode(Button, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  if(digitalRead(Button) == HIGH){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
}