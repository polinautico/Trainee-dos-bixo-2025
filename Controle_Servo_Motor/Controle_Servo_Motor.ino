void setup() {
  // put your setup code here, to run once:

  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int S = analogRead(A0);
  int S_mapped = map(S,0,1023,0,255);

  analogWrite(9,S_mapped);

}
