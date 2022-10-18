// https://wokwi.com/projects/345892300688196178

void setup() {
  Serial.begin(9600);

  pinMode(A0, INPUT);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  int value = analogRead(A0);

  double per = ((150 * value) / 145) + 50;
  Serial.println(per);

  if (per >= 0) {
    digitalWrite(2, HIGH);
    delay(per);
    digitalWrite(2, LOW);
    delay(per);
  }
}
