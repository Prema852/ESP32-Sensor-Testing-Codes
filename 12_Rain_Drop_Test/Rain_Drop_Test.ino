// Rain Drop Sensor Test using ESP32

// Analog output pin
#define RAIN_AO 34

// Digital output pin
#define RAIN_DO 14

void setup() {
  // Set digital output pin as input
  pinMode(RAIN_DO, INPUT);

  // Start Serial Monitor
  Serial.begin(115200);
}

void loop() {
  // Read analog value
  int rainValue = analogRead(RAIN_AO);

  // Read digital output
  int rainStatus = digitalRead(RAIN_DO);

  // Display analog value
  Serial.print("Rain Sensor Value: ");
  Serial.println(rainValue);

  // Display digital status
  if (rainStatus == LOW) {
    Serial.println("Rain Detected");
  } else {
    Serial.println("No Rain");
  }

  Serial.println("--------------------");

  delay(1000);
}
