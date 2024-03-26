#define led 3
#define Potansiyometre A0

void setup() {
}

void loop() {
  int deger = analogRead(Potansiyometre);

  deger = map(deger, 0, 1023, 0, 255);

  analogWrite(led,deger);
}