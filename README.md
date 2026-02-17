# Traffic Light Simulation (Arduino Project)

This project simulates a basic traffic light system using an Arduino and three LEDs (Red, Yellow, and Green). Each light turns on for a specific duration to mimic real traffic signal behavior.

---

## Components Used

- Arduino UNO board
- Red LED
- Yellow LED
- Green LED
- 3 × 220Ω resistors
- Jumper wires
- Breadboard

---

## How It Works

The system follows a simple traffic light sequence:

1. 🔴 **Red Light** turns ON for 5 seconds.
2. 🟢 **Green Light** turns ON for 20 seconds.
3. 🟡 **Yellow Light** turns ON for 2 seconds.
4. The cycle repeats continuously.

Each LED is connected to a separate digital pin on the Arduino.

---

## Pin Configuration

| LED Color | Arduino Pin |
|-----------|------------|
| Red       | 3          |
| Yellow    | 6          |
| Green     | 9          |


