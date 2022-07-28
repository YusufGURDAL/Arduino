void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
}

void loop() {
  for(int i = 0; i<256; i++){
    analogWrite(9, i);
    analogWrite(10, 255-i);
    delay(10);
  }
  for(int i = 0; i<256; i++){
    analogWrite(10, i);
    analogWrite(11, 255-i);
    delay(10);
  }
  for(int i = 0; i<256; i++){
    analogWrite(11, i);
    analogWrite(9, 255-i);
    delay(10);
  }
}
