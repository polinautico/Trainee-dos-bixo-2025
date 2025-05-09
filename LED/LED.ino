void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(11, 125);
  delay(1000);
  analogWrite(11, 0);
  analogWrite(10, 125);
  delay(1000);
  analogWrite(10, 0);
  analogWrite(9, 125);
  delay(1000);
  analogWrite(9, 0);
}
