// Soil Moisture Sensor Test using ESP32

// Soil moisture sensor analog output pin
#define SOIL_PIN 34

void setup() {
  // Start Serial Monitor
  Serial.begin(115200);
}

void loop() {
  // Read the analog value from the soil moisture sensor
  int moistureValue = analogRead(SOIL_PIN);

  // Display the sensor value
  Serial.print("Soil Moisture Value: ");
  Serial.println(moistureValue);

  // Wait before taking the next reading
  delay(1000);
}
