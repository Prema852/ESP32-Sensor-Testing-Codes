#include "DHT.h"   // Include the DHT sensor library

// Define the pin connected to the DHT11 data pin
#define DHT_PIN 4

// Specify the type of DHT sensor being used
#define DHT_TYPE DHT11

// Create a DHT sensor object
DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  // Start Serial Monitor communication at 115200 baud
  Serial.begin(115200);

  // Initialize the DHT11 sensor
  dht.begin();
}

void loop() {
  // Read humidity from the DHT11 sensor
  float humidity = dht.readHumidity();

  // Read temperature in Celsius
  float temperature = dht.readTemperature();

  // Check whether the sensor readings are valid
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT11 sensor!");
    delay(2000);
    return;
  }

  // Display temperature on the Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Display humidity on the Serial Monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Separator for better readability
  Serial.println("--------------------");

  // Wait 2 seconds before taking the next reading
  delay(2000);
}
