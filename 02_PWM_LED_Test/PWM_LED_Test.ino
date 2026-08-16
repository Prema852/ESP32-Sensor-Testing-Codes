#define LED_PIN 25

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  analogWrite(LED_PIN, 0);
  delay(1000);    // 0 = 0% duty cycle

  analogWrite(LED_PIN, 64);
  delay(1000);    // 64 ≈ 25% duty cycle

  analogWrite(LED_PIN, 128);
  delay(1000);    // 128 ≈ 50% duty cycle

  analogWrite(LED_PIN, 191);
  delay(1000);    // 191 ≈ 75% duty cycle

  analogWrite(LED_PIN, 255);
  delay(1000);    // 255 = 100% duty cycle
}
