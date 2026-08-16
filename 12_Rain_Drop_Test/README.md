# Rain Drop Sensor Test – ESP32

This project demonstrates rain detection using a **rain drop sensor** and an **ESP32**.

The sensor detects water or raindrops on its sensing plate and provides analog and digital outputs.

## How the Rain Drop Sensor Works

The sensing plate contains conductive tracks. When water or raindrops fall on the plate, the electrical conductivity changes.

The sensor module converts this change into an output signal.

It provides two outputs:

- **A0 (Analog Output)** – provides a changing value depending on the amount of water detected.
- **D0 (Digital Output)** – provides a HIGH/LOW signal based on the threshold set using the onboard potentiometer.

In this project, both outputs are tested.

## Working

The ESP32 continuously reads the analog and digital outputs from the rain drop sensor.

The analog value changes depending on the amount of water present on the sensing plate.

The digital output changes when the sensor value crosses the threshold set using the onboard potentiometer.

## Expected Output

Example Serial Monitor output:

```text
Rain Sensor Value: 2850
No Rain
--------------------
Rain Sensor Value: 1450
Rain Detected
--------------------
```

The analog value and detection status change when water is placed on or removed from the sensing plate.

## Serial Monitor

Open the Arduino IDE Serial Monitor and set the baud rate to:

```text
115200
```

The sensor readings are updated approximately every 1 second.

## Applications

- Rain detection systems
- Automatic wipers
- Weather monitoring
- Smart irrigation systems
- Water detection
- Automatic window systems

## Important Note

The analog reading is a **raw sensor value** and is not a direct measurement of rainfall in millimeters.

The digital detection threshold can be adjusted using the potentiometer on the sensor module.

## Hardware Note

The sensor module is powered using **5V**.

Since ESP32 GPIO pins operate at **3.3V logic**, ensure that the voltage applied to the ESP32 input pins does not exceed the safe input voltage.

For real hardware, check the sensor module's output voltage and use suitable voltage level conversion if required.


## Result

The ESP32 successfully reads the rain drop sensor and displays the analog sensor value and rain detection status on the Serial Monitor.
