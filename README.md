# smart-peltier-face-mask
# Peltier-Based Smart Face Mask

A smart temperature-regulating face mask designed to improve user comfort in extreme environments. The system uses a Peltier module to cool the air entering the mask and a temperature sensor to monitor environmental conditions.

## Overview

This project demonstrates the integration of embedded systems and electronics to create a wearable cooling solution. The mask regulates airflow temperature using a microcontroller-based control system.

## Features

- Real-time temperature monitoring
- Automatic cooling control
- Portable battery-powered system
- Compact wearable design

## Components Used

- Arduino Uno
- TEC1-12706 Peltier Module
- DHT11 Temperature Sensor
- MOSFET (for switching)
- Li-ion Battery (3.7V 3000mAh)
- Breadboard and jumper wires

## Working Principle

1. The DHT11 sensor reads ambient temperature.
2. The Arduino processes the temperature data.
3. If the temperature exceeds a defined threshold, the Peltier module is activated.
4. The Peltier module cools the airflow entering the mask.
5. Once the temperature drops below the threshold, cooling stops to save power.

## Applications

- Workers in hot environments
- Outdoor activities
- Industrial safety equipment
- Medical or protective gear

## Future Improvements

- Add OLED display for temperature monitoring
- Bluetooth mobile control
- Automatic fan speed adjustment
- AI-based temperature prediction

## Author

Dhanush D  
B.Tech Computer Science and Engineering  
SRM University
