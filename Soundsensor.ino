int soundPin = A0;
int ledpin = 13;
const int tresh = 40;

void setup () {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int soundValue = analogRead(soundPin);

  if (soundValue > tresh) {
    digitalWrite(ledpin, HIGH);
    Serial.println(soundValue);
    delay(1000);
  } else {
    digitalWrite(ledpin, LOW);
  }
}
