const int buttonPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() { 
  int reading = digitalRead(buttonPin);
  digitalWrite(ledPin, reading);
}
