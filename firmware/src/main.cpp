#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(500);
  Serial.println("[APOLLO] Electronics firmware skeleton ready");
}

void loop() {
  static uint32_t t = millis();
  if (millis() - t > 1000) {
    Serial.println("tick");
    t = millis();
  }
}
