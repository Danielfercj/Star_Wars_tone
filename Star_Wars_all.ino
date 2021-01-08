byte pin = 3;
//Notas musicales
int Eb4 = 311;
int Gb4 = 370;
int G4 = 392;
int Ab4 = 415;
int La4 = 440;
int Bb4 = 466;
int Cb5 = 494;
int C5 = 523;
int Db5 = 554;
int D5 = 587;
int Eb5 = 622;
int E5 = 659;
int F5 = 698;
int Gb5 = 740;
int G5 = 784;

void setup() {
  pinMode(pin,OUTPUT);
}

void stepPause50()  {
  noTone(pin);
  delay(50);
}

void stepPause320()  {
  noTone(pin);
  delay(320);
}
void estrofa1() {
  tone(pin,G4);
  delay(500);
  stepPause50();
  tone(pin,G4);
  delay(500);
  stepPause50();
  tone(pin,G4);
  delay(500);
  stepPause50();
  tone(pin,Eb4);
  delay(350);
  tone(pin,Bb4);
  delay(150);
  tone(pin,G4);
  delay(500);
  tone(pin,Eb4);
  delay(350);
  tone(pin,Bb4);
  delay(150);
  tone(pin,G4);
  delay(750);
  stepPause320();
}

void estrofa2() {
  tone(pin,D5);
  delay(500);
  stepPause50();
  tone(pin,D5);
  delay(500);
  stepPause50();
  tone(pin,D5);
  delay(500);
  stepPause50();
  tone(pin,Eb5);
  delay(350);
  tone(pin,Bb4);
  delay(150);
  tone(pin,Gb4);
  delay(500);
  tone(pin,Eb4);
  delay(350);
  tone(pin,Bb4);
  delay(150);
  tone(pin,G4);
  delay(750);
  stepPause320();
}

void coro() {
  tone(pin,G5);
  delay(500);
  stepPause50();
  tone(pin,G4);
  delay(360);
  stepPause50();
  tone(pin,G4);
  delay(250);
  tone(pin,G5);
  delay(500);
  stepPause50();
  tone(pin,Gb5);
  delay(370);
  stepPause50();
  tone(pin,F5);
  delay(188);
  tone(pin,E5);
  delay(188);
  noTone(pin);
  delay(30);
  tone(pin,E5);
  delay(250);
  noTone(pin);
  delay(300);
  tone(pin,Ab4);
  delay(250);
  tone(pin,Db5);
  delay(500);
  stepPause50();
  tone(pin,C5);
  delay(370);
  stepPause50();
  tone(pin,Cb5);
  delay(250);
  stepPause50();
  tone(pin,La4);
  delay(250);
  noTone(pin);
  delay(300);
  tone(pin,Eb4);
  delay(250);
  tone(pin,Gb4);
  delay(500);
  tone(pin,Eb4);
  delay(370);
}

void estrofa3() {
  coro();
  tone(pin,Gb4);
  delay(160);
  tone(pin,Bb4);
  delay(500);
  tone(pin,G4);
  delay(370);
  tone(pin,Bb4);
  delay(160);
  tone(pin,D5);
  delay(750);
  stepPause320();
}

void estrofa4() {
  coro();
  tone(pin,Bb4);
  delay(160);
  tone(pin,G4);
  delay(500);
  tone(pin,Eb4);
  delay(370);
  tone(pin,Bb4);
  delay(160);
  tone(pin,G4);
  delay(1020);
  stepPause50();
  tone(pin,G4);
  delay(500);
  stepPause50();
  tone(pin,G4);
  delay(500);
  stepPause50();
  tone(pin,G4);
  delay(500);
   tone(pin,Eb4);
  delay(370);
   tone(pin,Bb4);
  delay(160);
   tone(pin,G4);
  delay(500);
   tone(pin,Eb4);
  delay(370);
   tone(pin,Bb4);
  delay(160);
   tone(pin,G4);
  delay(750);
  stepPause320();
}

void loop() {
  estrofa1();
  estrofa2();
  estrofa3();
  estrofa4();
  estrofa2();
  estrofa3();
  estrofa4();
}
