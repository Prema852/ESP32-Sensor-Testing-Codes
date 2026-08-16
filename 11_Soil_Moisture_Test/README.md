# Soil Moisture Sensor Test – ESP32

This project demonstrates basic soil moisture measurement using a **soil moisture sensor** and an **ESP32**.

The sensor detects the moisture level in soil and provides an analog output that can be read by the ESP32.

## How the Soil Moisture Sensor Works

The sensor uses electrical conductivity to detect the amount of moisture present in the soil.

When the soil contains more water, its electrical conductivity changes. This causes the sensor's output voltage to change.

The ESP32 reads this analog output and displays the sensor value on the Serial Monitor.

## Working

The ESP32 continuously reads the analog output from the soil moisture sensor.

The sensor value changes depending on the moisture present in the soil.

- **Dry soil** → one range of sensor values
- **Wet soil** → a different range of sensor values

The exact values depend on the sensor module and its operating conditions.

## Expected Output

The sensor value is displayed on the Serial Monitor.

Example:

```text
Soil Moisture Value: 3200
Soil Moisture Value: 2850
Soil Moisture Value: 2100
Soil Moisture Value: 1400
```

The value changes when the moisture level of the soil changes.

## Serial Monitor

Open the Arduino IDE Serial Monitor and set the baud rate to:

```text
115200
```

The soil moisture value is updated approximately every 1 second.

## Applications

- Automatic irrigation systems
- Smart agriculture
- Plant monitoring
- Garden monitoring
- Soil condition monitoring
- Water management systems

## Important Note

The sensor value is a **raw analog reading** and is not directly a percentage of soil moisture.

Different soil moisture sensors can produce different value ranges. For accurate moisture percentage measurement, the sensor should be calibrated using dry and wet soil conditions.


## Result

The ESP32 successfully reads the analog output of the soil moisture sensor and displays the corresponding sensor value on the Serial Monitor.
