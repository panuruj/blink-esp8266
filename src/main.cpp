#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(192000);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED on");
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED off");
  delay(1000);
}