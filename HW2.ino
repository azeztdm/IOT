const int ledPin = 0;
const int buttonPin = 1;
int buttonState = 0;
bool ledState = false; 

void setup() {
  pinMode(ledPin, OUTPUT); 
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    ledState = !ledState;
    digitalWrite(ledPin, ledState ? HIGH : LOW);
    delay(500);
  }
}