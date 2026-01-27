#include <Arduino.h>

// 1. DECLARAÇÃO GLOBAL: Coloque aqui para que todos vejam
int result = 0;

int myFunction(int, int);

void setup() {
    Serial.begin(9600); // Não esqueça disso para ver o resultado!
    // 2. ATRIBUIÇÃO: Aqui você apenas dá o valor, sem o "int" na frente
    result = myFunction(2, 3); 
}

void loop() {
    // 3. USO: Agora o loop consegue ler o valor de 'result'
    Serial.println(result);
    delay(1000); // Um atraso para não inundar o monitor serial
}

int myFunction(int x, int y) {
    return x + y;
}