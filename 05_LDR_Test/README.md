# LDR Sensor Test – ESP32

An LDR (Light Dependent Resistor) is a light-sensitive component whose resistance changes with the intensity of light. 
Its resistance decreases as the light intensity increases and increases as the light intensity decreases.

This project demonstrates how to read the analog output of an LDR using an ESP32.

## Working

The LDR module provides an analog output (AO) that changes according to the surrounding light intensity.

The AO pin is connected to GPIO 34 of the ESP32. The ESP32 reads the analog value and displays it on the Serial Monitor.

## Pin Connections

- LDR VCC → ESP32 3.3V
- LDR AO → ESP32 GPIO 34
- LDR GND → ESP32 GND

## Expected Output

The Serial Monitor displays the analog value of the LDR.

Example:

```text
LDR Value: 850
LDR Value: 920
LDR Value: 430
LDR Value: 120
