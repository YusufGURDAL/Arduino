void red(){
  digitalWrite(2, HIGH);
  delay(50);
  digitalWrite(2, LOW);
  delay(50);
  int dim = analogRead(A5);
  dim = map(dim, 0, 1023, 0, 255);
  analogWrite(11, dim);
}
void blue(){
  digitalWrite(3, HIGH);
  delay(50);
  digitalWrite(3, LOW);
  delay(50);
  int dim = analogRead(A5);
  dim = map(dim, 0, 1023, 0, 255);
  analogWrite(11, dim);
}
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(A5, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  for(int i = 0; i < 3; i++){
    red();
  }
  for(int i = 0; i < 3; i++){
    blue();
  }
}
