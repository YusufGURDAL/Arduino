void red(){
  digitalWrite(0, HIGH);
  delay(50);
  digitalWrite(0, LOW);
  delay(50);
}
void blue(){
  digitalWrite(1, HIGH);
  delay(50);
  digitalWrite(1, LOW);
  delay(50);
}
void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop() {
  for(int i = 0; i < 3; i++){
    red();
  }
  for(int i = 0; i < 3; i++){
    blue();
  }
}
