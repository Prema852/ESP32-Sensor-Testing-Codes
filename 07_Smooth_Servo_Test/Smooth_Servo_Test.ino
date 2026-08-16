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

  // Smoothly rotate from 0° to 180°
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle);
    delay(15);
  }

  // Smoothly rotate from 180° back to 0°
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle);
    delay(15);
  }
}
