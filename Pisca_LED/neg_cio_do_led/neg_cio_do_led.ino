void setup() {
  // put your setup code here, to run once:
void pinMode(5, OUTPUT)
}

void loop() {
analogWrite(5, 153)
delay(1000)
analogWrite(5, 0)
delay(1000)
}
