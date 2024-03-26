#define Potansiyometre A0

int deger=0;

void setup() {
  Serial.begin(9600);
  Serial.println("Potansiyometredeki değerin okunması");
}

void loop() {
  deger = analogRead(Potansiyometre);

  float gerilim = (5.00/1024.00) * deger;
  
  Serial.println(gerilim);
  delay(300);
}