void setup() {

}

void loop() {

int a = analogRead(9) ;
int valor = map(a, 0, 1023, 0, 255);
analogWrite(5, valor);

}
