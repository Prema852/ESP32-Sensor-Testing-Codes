# Servo Motor Test – ESP32

A servo motor is an actuator that can rotate its shaft to a specific angular position. Unlike a normal DC motor, 
a servo motor can be controlled to move to a desired angle.

This project demonstrates basic servo motor control using an ESP32.

## Working

The servo motor receives a control signal from the ESP32 through GPIO 13.

The ESP32 sends control signals to position the servo motor at different angles. In this test, the servo moves through:

- 0°
- 90°
- 180°
- 90°
- 0°

The servo remains at each position for 1 second before moving to the next position. The sequence continuously repeats.

## Pin Connections

- Servo Signal (Orange/Yellow) → ESP32 GPIO 13
- Servo VCC (Red) → ESP32 5V
- Servo GND (Brown/Black) → ESP32 GND

## Expected Output

The servo motor continuously moves between the following positions:

```text
0° → 90° → 180° → 90° → 0°
