int x = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(A0);
  x = map(x, 0, 1023, 0, 255);
  Serial.println(x);
  analogWrite(11, x);


}
