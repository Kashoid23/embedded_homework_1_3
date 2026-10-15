#include <Arduino.h>

constexpr uint8_t RED_LED_PIN = 4;
constexpr uint8_t BLUE_LED_PIN = 5;
constexpr unsigned long BLINK_DURATION_MS = 500;

void blink(uint8_t pin, unsigned long durationMs) {
  digitalWrite(pin, HIGH);
  delay(durationMs);
  digitalWrite(pin, LOW);
}

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
}

void loop() {
  blink(RED_LED_PIN, BLINK_DURATION_MS);
  blink(BLUE_LED_PIN, BLINK_DURATION_MS);
}
