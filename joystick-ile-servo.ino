#include <Servo.h>

Servo motor;

int joystick_degeri;
int derece;

void setup() {
  motor.attach(3);
}

void loop() {
  joystick_degeri = analogRead(A0);
  derece = map(joystick_degeri, 0,1023,0,180);
  motor.write(derece);
}