int lm35 = A0;
int kirmizi = 10;
int yesil = 9;
int mavi = 8;

void setup() {
  Serial.begin(9600);
  pinMode(kirmizi, OUTPUT); 
  pinMode(yesil, OUTPUT);
  pinMode(mavi, OUTPUT);
}

void loop() {
 int deger = analogRead(lm35);
  float cikti = ( deger/1024.0)*5000;
  float sicaklik = cikti/10.0;

  Serial.print("Sıcaklık degeri: ");
  Serial.print(sicaklik);
  Serial.println(" C");

  delay(500);

  if(sicaklik>0 && sicaklik <18)
  {
    digitalWrite(kirmizi,0);
    digitalWrite(yesil,0);
    digitalWrite(mavi,1);
  }

    if(sicaklik>18 && sicaklik <25)
  {
    digitalWrite(kirmizi,0);
    digitalWrite(yesil,1);
    digitalWrite(mavi,0);
  }

      if(sicaklik>25 )
  {
    digitalWrite(kirmizi,1);
    digitalWrite(yesil,0);
    digitalWrite(mavi,0);
  } 
}