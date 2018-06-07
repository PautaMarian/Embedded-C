const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  9;
const int ledpin1 = 8;
// the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledpin1,LOW);
    delay(100);
    // turn LED off:
    digitalWrite(ledPin, LOW);
    digitalWrite(ledpin1,HIGH);
    delay(100);
  }
