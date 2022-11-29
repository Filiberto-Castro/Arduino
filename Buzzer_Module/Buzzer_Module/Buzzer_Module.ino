#include <Arduino.h>

int buzzer = 25;

void setup() {
  
pinMode(buzzer, OUTPUT);

}
void loop() {
  
tone(buzzer, 660);
delay(250);
noTone();
delay(500);

}

int playing = 0;
void tone(byte pin, int freq) {
  ledcSetup(0, 2000, 8); // setup beeper
  ledcAttachPin(pin, 0); // attach beeper
  ledcWriteTone(0, freq); // play tone
  playing = pin; // store pin
}
void noTone() {
  tone(playing, 0);
}