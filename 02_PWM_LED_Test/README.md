# PWM LED Test – ESP32

This project demonstrates basic PWM control of an LED using an ESP32.

## Working

The LED is connected to GPIO 2 through a 330Ω resistor.

The ESP32 changes the LED brightness using different PWM duty-cycle values.

The brightness changes in the following sequence:

- 0% duty cycle – LED OFF
- 25% duty cycle – Low brightness
- 50% duty cycle – Medium brightness
- 75% duty cycle – High brightness
- 100% duty cycle – Maximum brightness

Each brightness level is maintained for 1 second before changing to the next level.

## Pin Connection

- LED Anode (+) → GPIO 2 through 330Ω resistor
- LED Cathode (-) → GND

## Expected Output

The LED brightness continuously changes through:

0% → 25% → 50% → 75% → 100%

and then repeats.
