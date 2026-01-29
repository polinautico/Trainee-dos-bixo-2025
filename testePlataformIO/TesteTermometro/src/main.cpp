#include <Arduino.h>

#include "max6675.h" //INCLUSÃO DE BIBLIOTECA
int alert = 13;   
int ktcSO = 8; //PINO DIGITAL (SO)
int ktcCS = 9; //PINO DIGITAL
int ktcCLK = 10; //PINO DIGITAL (CLK / SCK)

MAX6675 ktc(ktcCLK, ktcCS, ktcSO); //CRIA UMA INSTÂNCIA UTILIZANDO OS PINOS (CLK, CS, SO)
  
void setup(){
  pinMode(alert, OUTPUT);  //saída para sistema de alerta
  digitalWrite(alert, LOW);//saída alert inicia em LOW
  Serial.begin(9600); //INICIALIZA A SERIAL
  delay(500); //INTERVALO DE 500 MILISSEGUNDOS
}
void loop(){
   Serial.print("Temperatura: "); //IMPRIME O TEXTO NO MONITOR SERIAL
   Serial.print(ktc.readCelsius()); //IMPRIME NO MONITOR SERIAL A TEMPERATURA MEDIDA
   Serial.println(" °C"); //IMPRIME O TEXTO NO MONITOR SERIAL
   
  if(ktc.readCelsius() > 30){    //aviso caso a temp esteja acima
     digitalWrite(alert, HIGH);
  }   
  else                                     //se não
  {
     digitalWrite(alert, LOW);         //mantém saída de alerta em LOW
  }
   delay(500); //INTERVALO DE 500 MILISSEGUNDOS
}

