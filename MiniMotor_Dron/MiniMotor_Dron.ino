int motor = 25;

void setup() {

pinMode(motor, OUTPUT);

}

void loop() {

ledcWrite(motor, 255);

}
