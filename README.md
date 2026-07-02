# Temperature-Based Fire Alarm System

An Arduino Uno-based fire alarm system that monitors ambient temperature using a DHT22 sensor. When the measured temperature exceeds a predefined threshold, the system activates a buzzer to provide an audible fire warning. The project is designed and simulated using Wokwi.

## Features

- 🔥 High-temperature fire detection
- 🌡️ Temperature and humidity monitoring using DHT22
- 🚨 Audible alarm using a buzzer
- 📊 Real-time sensor readings through the Serial Monitor
- 🔌 Built with Arduino Uno
- 🖥️ Simulated in Wokwi

## Hardware Components

- Arduino Uno
- DHT22 Temperature and Humidity Sensor
- Piezo Buzzer
- Jumper Wires

## Pin Configuration

| Component | Arduino Pin |
|-----------|-------------|
| DHT22 Data | D10 |
| Buzzer | D12 |

## Working Principle

1. The DHT22 continuously measures temperature and humidity.
2. The Arduino displays the readings on the Serial Monitor.
3. If the temperature reaches or exceeds **40°C**, the buzzer is activated.
4. Once the temperature drops below the threshold, the buzzer automatically turns off.

## Project Structure

```
temperature-based-fire-alarm-system/
├── sketch.ino
├── diagram.json
├── wokwi.toml
└── README.md
```

## Applications

- Fire Warning Systems
- Temperature Monitoring
- Laboratory Safety
- Industrial Equipment Monitoring
- Educational Arduino Projects

## Future Improvements

- Add an LED warning indicator
- Display readings on an LCD/OLED
- Send SMS or IoT alerts
- Integrate a flame sensor for higher accuracy
- Store temperature logs on an SD card


