// LDR Sensor Test using ESP32

// LDR output is connected to GPIO 34
#define LDR_PIN 34

void setup() {
  // Start Serial Monitor communication
  Serial.begin(115200);
}

void loop() {
  // Read the analog value from the LDR
  int ldrValue = analogRead(LDR_PIN);

  // Display the LDR value
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Wait before taking the next reading
  delay(1000);
}
