#include <Arduino.h>

float tensaoA0; // Armazena a tensão calculada no pino A0 (em volts)
float aRef=5; // Tensão de referência do ADC (padrão 5V para Arduino)
float relacaoA0=11; // Fator de conversão ESPECÍFICO do divisor de tensão
#define AMOSTRAS 12 // Define número de leituras para média móvel (redução de ruído)
void setup() {
Serial.begin(9600);
}
// FUNÇÃO: lePorta()
// Finalidade: Realiza leituras analógicas com média para reduzir ruídos
// Parâmetro: portaAnalogica (pino A0)
// Retorno: Valor médio das leituras (0-1023)
float lePorta(uint8_t portaAnalogica) {
float total=0;
for (int i=0; i<AMOSTRAS; i++) {
total += 1.0 * analogRead(portaAnalogica);
delay(5);
}
return total / (float)AMOSTRAS;
}
// FUNÇÃO: mostraTensoes()
// Finalidade: Exibe a tensão real calculada no Monitor Serial
void mostraTensoes() {
Serial.print("Tensao em A0: ");
Serial.print(tensaoA0 * relacaoA0); // Converte Vout para Vin (tensão real)
Serial.println ("V");
}
void loop() {
// 1. Lê valor médio do ADC e converte para tensão Vout:
// (valor_lido * 5V) / 1024 níveis = tensão na entrada do Arduino
tensaoA0 = (lePorta(A0) * aRef) / 1024.0;
mostraTensoes();
delay(500); //aguardo para medicoes
}