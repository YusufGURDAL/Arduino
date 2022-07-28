int red = 0;
int green = 0;
int blue = 0;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int red = digitalRead(3);
  int green = digitalRead(4);
  int blue = digitalRead(5);
  if(red == 0)
    digitalWrite(9, HIGH);
  else 
    digitalWrite(9, LOW);
  if(green == 0)
    digitalWrite(10, HIGH);
  else 
    digitalWrite(10, LOW);
  if(blue == 0)
    digitalWrite(11, HIGH);
  else 
    digitalWrite(11, LOW);
  delay(100);
}
