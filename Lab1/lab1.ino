int ledPin = 11;
int photocell = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int value = (analogRead(photocell)/4); // Divides input 0-1023 to resemble to 0-255

//  analogWrite(ledPin, photocell);
  Serial.println(value);

  if(value <= 80) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  // The delay can be change to get the desired dimming effect
  delay(100);

}
