#define Led 3

void setup() {
  pinMode(Led, OUTPUT)
  // put your setup code here, to run once:

}

void loop() {
  analogWrite(Led, 153);
  delay(1000);
  analogWrite(Led, 0);
  delay(1000);
  // put your main code here, to run repeatedly:
}
