#define potenciometro A0
#define servo 9

void setup() {
  pinMode(potenciometro, INPUT);
  pinMode(servo, OUTPUT);
}

void loop() {
  int x = analogRead(potenciometro);
  int mappedValue = map(x, 0, 1023, 0, 255);
  analogWrite(servo, mappedValue);
}
