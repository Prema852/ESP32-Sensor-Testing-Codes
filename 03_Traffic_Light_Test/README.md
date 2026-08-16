# Traffic Light Test – ESP32

This project demonstrates a basic traffic light sequence using an ESP32 and three LEDs.

## Working

Three LEDs are used to represent the traffic signal:

- Red LED – GPIO 25
- Yellow LED – GPIO 26
- Green LED – GPIO 27

Each LED is connected through a 330Ω resistor.

The LEDs operate in sequence:

- Red – 3 seconds
- Yellow – 2 seconds
- Green – 1 second

The sequence continuously repeats.

## Pin Connections

- Red LED Anode (+) → GPIO 25 through 330Ω resistor
- Red LED Cathode (-) → GND
- Yellow LED Anode (+) → GPIO 26 through 330Ω resistor
- Yellow LED Cathode (-) → GND
- Green LED Anode (+) → GPIO 27 through 330Ω resistor
- Green LED Cathode (-) → GND

## Expected Output

The LEDs turn ON one at a time in the following sequence:

RED → YELLOW → GREEN → Repeat
