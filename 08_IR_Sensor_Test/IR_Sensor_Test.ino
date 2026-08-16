// IR Sensor Test using ESP32-S3

// IR sensor OUT pin
#define IR_PIN 4

void setup() {
  // Set IR sensor pin as input
  pinMode(IR_PIN, INPUT);

  // Start Serial Monitor
  Serial.begin(115200);
}

void loop() {
  // Read the digital output from the IR sensor
  int sensorState = digitalRead(IR_PIN);

  // Check whether an object is detected
  if (sensorState == LOW) {
    Serial.println("Object Detected");
  } else {
    Serial.println("No Object");
  }

  // Wait before taking the next reading
  delay(500);
}
