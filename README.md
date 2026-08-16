# ESP32 Sensor & Component Testing Codes

This repository contains basic testing codes for different sensors, components, and modules used with the ESP32.

The purpose of this repository is to test individual components before using them in larger projects. Each folder contains the required Arduino code, circuit diagram, pin connection details, and a short explanation of the component.

## Components Tested

### 1. LED Test
Basic LED ON/OFF testing using ESP32.

### 2. PWM LED Test
Demonstrates LED brightness control using PWM.

### 3. Traffic Light Test
Demonstrates sequential control of three LEDs as traffic light signals.

### 4. DHT11 Sensor Test
Measures temperature and humidity using a DHT11 sensor.

### 5. LDR Sensor Test
Reads the analog value of an LDR to observe changes in light intensity.

### 6. Servo Motor Test
Tests basic servo motor movement between different angles.

### 7. Smooth Servo Rotation Test
Demonstrates smooth servo movement by gradually changing the angle.

### 8. IR Sensor Test
Detects the presence of an object using an IR proximity sensor.

### 9. Ultrasonic Sensor Test
Measures the distance of an object using an HC-SR04 ultrasonic sensor.

### 10. Gas Sensor Test
Reads the analog response of an MQ-series gas sensor.

### 11. Soil Moisture Sensor Test
Reads the analog output of a soil moisture sensor.

### 12. Rain Drop Sensor Test
Reads the analog and digital outputs of a rain drop sensor.

## Repository Structure

```text
ESP32-Sensor-Testing-Codes/
│
├── 01_LED_Test/
├── 02_PWM_LED_Test/
├── 03_Traffic_Light_Test/
├── 04_DHT11_Test/
├── 05_LDR_Test/
├── 06_Servo_Motor_Test/
├── 07_Smooth_Servo_Test/
├── 08_IR_Sensor_Test/
├── 09_Ultrasonic_Test/
├── 10_Gas_Sensor_Test/
├── 11_Soil_Moisture_Test/
└── 12_Rain_Drop_Test/
```

## Folder Contents

Each component folder generally contains:

- `.ino` file – Arduino code for testing the component
- `Circuit_Diagram.jpeg` – Circuit diagram
- `Pin_Connections.jpeg` – Pin connection reference
- `README.md` – Basic working, explanation, and expected output

## Purpose

This repository serves as a basic reference for testing and understanding different ESP32 sensors and components before integrating them into larger electronics and IoT projects.
