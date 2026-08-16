# Ultrasonic Sensor Test – ESP32

This project demonstrates distance measurement using an **HC-SR04 ultrasonic sensor** and an **ESP32**.

The sensor measures the distance between itself and an object and displays the measured distance in centimeters through the Serial Monitor.

## How the Ultrasonic Sensor Works

The HC-SR04 works by using **ultrasonic sound waves** to measure distance.

The sensor has two main parts:

- **Transmitter** – sends an ultrasonic sound pulse.
- **Receiver** – receives the reflected sound wave from an object.

The ESP32 sends a short trigger signal to the sensor. The HC-SR04 then sends an ultrasonic pulse toward the object.

When the sound wave hits an object, it is reflected back toward the sensor. The sensor produces an ECHO signal based on the time taken for the sound wave to return.

The ESP32 measures this time and calculates the distance.

Since the sound travels from the sensor to the object and back to the sensor, the total travel distance is divided by 2.

## Distance Formula

```text
Distance = (Time × Speed of Sound) / 2
```

The approximate speed of sound in air is:

```text
343 m/s
```

For calculations in the program, this is approximately:

```text
0.0343 cm/µs
```

## Working

The ESP32 performs the following steps:

1. The TRIG pin is set LOW briefly.
2. The ESP32 sends a **10-microsecond HIGH pulse** through the TRIG pin.
3. The HC-SR04 sends an ultrasonic pulse.
4. The sound wave travels toward the object and is reflected back.
5. The ECHO pin becomes HIGH for the duration of the returning signal.
6. The ESP32 measures the duration of the ECHO signal.
7. The measured time is converted into distance in centimeters.
8. The calculated distance is displayed on the Serial Monitor.
9. The process repeats every 500 milliseconds.

## Expected Output

The measured distance is displayed in centimeters.

Example:

```text
Distance: 25.34 cm
Distance: 24.91 cm
Distance: 25.18 cm
Distance: 30.42 cm
Distance: 35.67 cm
```

The distance value changes when the object is moved closer to or farther away from the sensor.

## Serial Monitor

Open the Arduino IDE Serial Monitor and set the baud rate to:

```text
115200
```

The Serial Monitor continuously displays the distance measured by the ultrasonic sensor.

## Features

- Measures distance using ultrasonic waves
- Displays distance in centimeters
- Continuously updates the measurement
- Uses ESP32 for distance calculation
- Simple and easy-to-understand implementation

## Applications

Ultrasonic distance measurement can be used in:

- Obstacle detection
- Smart parking systems
- Robotics
- Automatic doors
- Distance measurement systems
- Collision avoidance systems
- Water-level monitoring
- Object detection

## Hardware Note

The HC-SR04 is commonly powered using **5V**.

The **ECHO output can be approximately 5V**, while ESP32 GPIO pins operate at **3.3V logic**.

For real hardware, do **not** connect a 5V ECHO signal directly to an ESP32 GPIO pin. Use a **voltage divider or suitable logic-level shifter** between the ECHO output and the ESP32 GPIO.

The circuit used for simulation may show a direct ECHO connection. However, when building the circuit on physical hardware, the ECHO signal should be reduced to a safe 3.3V level before connecting it to the ESP32.


## Result

The ESP32 successfully reads the echo time from the HC-SR04 ultrasonic sensor and converts it into a distance value in centimeters. The measured distance is continuously displayed on the Serial Monitor.
