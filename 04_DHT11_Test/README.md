# DHT11 Sensor Test – ESP32

This project demonstrates basic temperature and humidity measurement using a DHT11 sensor with ESP32.

## Working

The DHT11 sensor measures:

- Temperature in °C
- Relative humidity in %

The sensor data pin is connected to GPIO 4 of the ESP32.

The readings are displayed on the Serial Monitor every 2 seconds.

## Pin Connections

- DHT11 VCC → ESP32 3.3V
- DHT11 DATA → ESP32 GPIO 4
- DHT11 GND → ESP32 GND

## Expected Output

The Serial Monitor displays the temperature and humidity values.

Example:

Temperature: 24.00 °C
Humidity: 40.00 %
--------------------

## Simulation Note

DHT11 was not available in Wokwi during testing, so a DHT22 was used for the circuit simulation.

The DHT22 uses the same basic VCC, DATA and GND connections for this test. The actual hardware sensor used for this project is DHT11.
