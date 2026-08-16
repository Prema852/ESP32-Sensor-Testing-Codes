# IR Sensor Test – ESP32-S3

This project demonstrates basic object detection using an IR sensor and an ESP32-S3.

## How the IR Sensor Works

The IR sensor uses infrared light to detect objects placed in front of it.

The sensor emits infrared light and detects the reflected light from an object. Based on the reflected signal, the sensor provides a digital output.

- `LOW` → Object Detected
- `HIGH` → No Object

The detection sensitivity/distance can usually be adjusted using the potentiometer provided on the sensor module.

## Working

The IR sensor output is connected to GPIO 4 of the ESP32-S3.

The ESP32-S3 continuously reads the digital output from the sensor and displays the detection status in the Serial Monitor.

The sensor is checked every 500 ms.


## Expected Output

When no object is detected:

```text
No Object
No Object
No Object

When an object is placed in front of the sensor:

Object Detected
Object Detected
Object Detected
