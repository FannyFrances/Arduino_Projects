void setup() {
  pinMode(3,OUTPUT);
}

float U_photo;
int brightness;

void loop() {
  U_photo = analogRead(0);
  brightness = 255 * (U_photo/1023);
  analogWrite(3, brightness);
}
