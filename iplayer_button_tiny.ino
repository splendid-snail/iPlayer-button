#include <IRremote.h>
#include <IRremoteInt.h>

const int buttonPin = 0;
int buttonState = 0;
int delayValue = 20;

IRsend irsend;

void setup() {
  pinMode(buttonPin, INPUT);

  OSCCAL = 0x80;
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH){
    irsend.sendNEC(0x00FD04FB, 32);
    delay(delayValue);
    irsend.sendNEC(0x7FFFFFFF, 32);
    delay(1000);

    irsend.sendNEC(0x00FD6897, 32);
    delay(delayValue);
    irsend.sendNEC(0x7FFFFFFF, 32);
    delay(delayValue);

    irsend.sendNEC(0x00FD6897, 32);
    delay(delayValue);
    irsend.sendNEC(0x7FFFFFFF, 32);
    delay(delayValue);

    irsend.sendNEC(0x00FDA857, 32);
    delay(delayValue);
    irsend.sendNEC(0x7FFFFFFF, 32);
    delay(delayValue);
  }
}
