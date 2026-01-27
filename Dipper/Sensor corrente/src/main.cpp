#include <Arduino.h>
#define sensor A0
int leitura_amp = 0;
float V_lida = 0;
float V_refe = 5.0;
float sensibilidade = 0.020;
float corrente = 0;

void setup() {
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  leitura_amp = analogRead(sensor);
  V_lida = ((leitura_amp*V_refe)/(1023.0));
  corrente = (V_lida - (V_refe/2.0))/sensibilidade;
  Serial.print("Corrente (Ampere): ");
  Serial.print(corrente);
  delay(500);
}
