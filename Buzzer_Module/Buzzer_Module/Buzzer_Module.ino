#include <Arduino.h>

//Declarar el pin del Buzzer
int buzzer = 25;

void setup() {
  
pinMode(buzzer, OUTPUT);

}
void loop() {

//Imitir el sonido  
tone(buzzer, 660);
delay(250);
//Apagar el sonido
noTone();
delay(500);

}

//Metodo para emitir el sonido
int playing = 0;
void tone(byte pin, int freq) {
  ledcSetup(0, 2000, 8);
  ledcAttachPin(pin, 0);
  ledcWriteTone(0, freq);
  playing = pin;
}

//Metodo para apagar el sonido
void noTone() {
  tone(playing, 0);
}