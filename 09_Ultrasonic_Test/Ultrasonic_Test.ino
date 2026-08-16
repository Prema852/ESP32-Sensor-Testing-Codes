// Ultrasonic Sensor Test using ESP32

// Define ultrasonic sensor pins
#define TRIG_PIN 5
#define ECHO_PIN 18

void setup() {
  // Set trigger pin as output
  pinMode(TRIG_PIN, OUTPUT);

  // Set echo pin as input
  pinMode(ECHO_PIN, INPUT);

  // Start Serial Monitor
  Serial.begin(115200);
}

void loop() {
  // Make sure the trigger pin is LOW
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  // Send a 10-microsecond ultrasonic pulse
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Measure the time taken for the echo
  long duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance in centimeters
  float distance = duration * 0.0343 / 2;

  // Display distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Wait before the next measurement
  delay(500);
}
