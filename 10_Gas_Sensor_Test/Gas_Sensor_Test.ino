// Gas Sensor Test using ESP32

// Gas sensor analog output pin
#define GAS_SENSOR_PIN 34

void setup() {
  // Start Serial Monitor
  Serial.begin(115200);
}

void loop() {
  // Read the analog value from the gas sensor
  int gasValue = analogRead(GAS_SENSOR_PIN);

  // Display the gas sensor value
  Serial.print("Gas Sensor Value: ");
  Serial.println(gasValue);

  // Wait before taking the next reading
  delay(1000);
}
