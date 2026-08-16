# Smooth Servo Rotation Test – ESP32

A servo motor can be controlled to rotate its shaft to a specific angle. By changing the angle gradually,
the servo can move smoothly between two positions.

This project demonstrates smooth servo rotation using an ESP32.

## Working

The servo signal is connected to GPIO 13 of the ESP32.

The servo starts at 0° and gradually moves to 180°. It then gradually moves back from 180° to 0°.

The angle is increased or decreased one degree at a time with a short delay, resulting in smooth movement.

## Pin Connections

- Servo Signal (Orange/Yellow) → ESP32 GPIO 13
- Servo VCC (Red) → ESP32 5V
- Servo GND (Brown/Black) → ESP32 GND

## Expected Output

The servo smoothly rotates from:

```text
0° → 1° → 2° → ... → 180°

and then smoothly returns:

180° → 179° → 178° → ... → 0°
The motion repeats continuously.
