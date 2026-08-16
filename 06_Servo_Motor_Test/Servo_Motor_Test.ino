#include <ESP32Servo.h>   // Servo library for ESP32

// Servo signal pin
#define SERVO_PIN 13

// Create servo object
Servo myServo;

void setup() {
  // Attach the servo to GPIO 13
  myServo.attach(SERVO_PIN);
}

void loop() {
  // Move servo to 0 degrees
  myServo.write(0);
  delay(1000);

  // Move servo to 90 degrees
  myServo.write(90);
  delay(1000);

  // Move servo to 180 degrees
  myServo.write(180);
  delay(1000);

  // Move servo back to 90 degrees
  myServo.write(90);
  delay(1000);

  // Move servo back to 0 degrees
  myServo.write(0);
  delay(1000);
}
