int kirmiziPin = 9;
int yesilPin = 10;
int maviPin = 11;

void setup() {
  Serial.begin(9600);
  pinMode(kirmiziPin, OUTPUT);
  pinMode(yesilPin, OUTPUT);
  pinMode(maviPin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char receivedChar = Serial.read();

    switch (receivedChar) {
      case 'k':
        digitalWrite(kirmiziPin, LOW);
        digitalWrite(yesilPin, HIGH);
        digitalWrite(maviPin, HIGH);
        break;
      case 'y':
        digitalWrite(kirmiziPin, HIGH);
        digitalWrite(yesilPin, LOW);
        digitalWrite(maviPin, HIGH);
        break;
      case 'm':
        digitalWrite(kirmiziPin, HIGH);
        digitalWrite(yesilPin, HIGH);
        digitalWrite(maviPin, LOW);
        break;
      default:
        digitalWrite(kirmiziPin, HIGH);
        digitalWrite(yesilPin, HIGH);
        digitalWrite(maviPin, HIGH);
        break;
    }
  }
}
