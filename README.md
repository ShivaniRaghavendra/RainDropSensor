# Rain Sensor Detection with ESP32

This project demonstrates how to use a **rain sensor** with an ESP32 to detect rainfall. The sensor provides both **analog** and **digital** readings to determine the intensity of rain and whether it is currently raining.

## Features
- Uses a **rain sensor** to detect precipitation.
- Provides **analog readings** for rain intensity measurement.
- Uses **digital readings** for rain detection (Yes/No).
- Displays rain status on the **Serial Monitor**.

## Components Used
- **ESP32**
- **Rain Sensor Module**

## Circuit Connections
| Component | ESP32 Pin |
|-----------|-----------|
| Rain Sensor Analog Output | GPIO 35 |
| Rain Sensor Digital Output | GPIO 5 |

## Installation & Setup
### 1. Upload the Code
1. Open the **Arduino IDE**.
2. Copy and paste the provided code.
3. Connect the ESP32 and upload the sketch.

### 2. Open Serial Monitor
- Set baud rate to **115200**.
- Observe rain sensor interactions and readings.

## How It Works
1. The **analog output** of the rain sensor provides a **rain intensity value**.
2. The **digital output** signals whether it is raining (**LOW = Rain detected, HIGH = No rain**).
3. The **Serial Monitor** displays both readings for real-time monitoring.

## Example Output
```
--- RAINDROP SENSOR READINGS ---
Analog Value (Rain Intensity): 820
Digital Value (Rain Detected): YES (Raining)
```

## Future Enhancements
- Add an **alert system** using an LED or buzzer.
- Implement **WiFi or Bluetooth** to send rain alerts.
- Integrate with **IoT platforms** for remote monitoring.

## License
This project is open-source under the MIT License.

