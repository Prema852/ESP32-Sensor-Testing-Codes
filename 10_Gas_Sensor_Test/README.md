# Gas Sensor Test – ESP32

This project demonstrates basic gas detection using an **MQ-series gas sensor** and an **ESP32**.

## How the Gas Sensor Works

MQ-series gas sensors detect gases by measuring the change in electrical resistance of their sensing material when exposed to gases.

The sensor provides:

- **AO (Analog Output)** – gives a varying sensor value.
- **DO (Digital Output)** – gives a HIGH/LOW signal based on a set threshold.

In this project, the **AO pin is used** to read the sensor value.

## Working

The ESP32 continuously reads the analog value from the gas sensor and displays it on the Serial Monitor.

The sensor value changes depending on the gas concentration and surrounding conditions.

## Expected Output

```text
Gas Sensor Value: 420
Gas Sensor Value: 438
Gas Sensor Value: 512
Gas Sensor Value: 690
```

The value may vary depending on the sensor and environment.

## Serial Monitor

Set the Serial Monitor baud rate to:

```text
115200
```

## Important Note

MQ-series gas sensors require a **warm-up period** before their readings become more stable.

Also, when using a gas sensor powered by **5V**, its AO output may exceed the ESP32's **3.3V input limit**.

For real hardware, use a **voltage divider or suitable level shifter** between AO and the ESP32 ADC input.

The basic simulation circuit may show a direct connection, but the voltage level must be considered when building the circuit physically.

## Applications

- Gas leakage detection
- Smoke detection
- Air-quality monitoring
- Industrial safety
- Environmental monitoring

## Result

The ESP32 successfully reads the gas sensor's analog response and displays the raw sensor value on the Serial Monitor.
