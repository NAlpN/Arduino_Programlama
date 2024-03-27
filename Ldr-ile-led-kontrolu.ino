#define Led 5

void setup() {
    pinMode(Led,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  int isik = analogRead(A0);

  Serial.println(isik);
  delay(100);

  if(isik > 800){
    digitalWrite(Led,LOW);
  }

  if(isik < 750){
    digitalWrite(Led,HIGH);
  }
}