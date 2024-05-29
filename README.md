# Smart Pot IoT Project - SEP4 VIA
## Overview
The Smart Pot IoT Project is an innovative solution for automating plant care. This project utilizes IoT technology to monitor soil moisture levels and water container status, ensuring that plants receive the optimal amount of water. The system operates in cycles, automatically checking the moisture levels and water container, and watering the plant when needed. The project also includes a firmware flasher for easy deployment to Arduino Mega2560 controllers.

THIS PROJECT IS A PART OF A BACKEND AND FRONTEND SYSTEM. THE PROGRAM DOES NOT WORK BY ITSELF.
THE ONLY CONTRIBUTERS ALLOWED UNTIL SEPTEMPER, AS IT IS PART OF A SCHOOL PROJECT:

JonasPHenriksen - 330943 Jonas Henriksen 

AGHowson - 331186 Alexander J. G. Howson

Twaish - 331188 Dan V. Nguyen

SnowyGl - 331285 Marc Bang-Jørgensen

## Features
Automatic Soil Moisture Monitoring: Continuously checks soil moisture levels to determine the watering needs of the plant.
Water Container Status Monitoring: Ensures there is sufficient water available in the container for watering the plant.
Automated Watering System: Waters the plant when the soil moisture falls below a certain threshold.
Scheduled Cycles: Operates in predefined cycles to periodically check moisture levels and water the plant.
Firmware Flasher: Simplifies the deployment of firmware to Arduino Mega2560 controllers.

## Components
Arduino Mega2560: Microcontroller used for processing data and controlling the watering system.
Soil Moisture Sensor: Measures the moisture level in the soil.
Water Level Sensor: Monitors the water level in the container.
Water Pump: Delivers water from the container to the plant.
Relay Module: Controls the water pump based on signals from the Arduino.
Firmware Flasher Tool: Software tool for uploading the firmware to the Arduino Mega2560.

# Installation and Setup

## Hardware Setup

### Connect the Wifi module:

Connect the GND pin to the GND port on the Arduino.
Connect the VCC pin to the 5V port on the Arduino.
Connect the TX pin to the TXD2 port on the Arduino. 
Connect the RX pin to the RXD2 port on the Arduino.

### Connect the buzzer module:

Connect the GND pin to the GND port on the Arduino.
Connect the VCC pin to the PA7 port on the Arduino.

### Connect the Soil Moisture Sensor:

Connect the Analog Signal pin to the ADC9/PK1 port on the Arduino.
Connect the GND pin to the GND port on the Arduino.
Connect the powert to the PC0 port on the Arduino.

### Connect the Water Level Sensor (hc_sr04):

Connect the VCC pin to the 5V port on the Arduino.
Connect the GND pin to the GND port on the Arduino.
Connect the Echo pin to PL6 port on the Arduino.
Connect the Trigger to PL7 port the Arduino.

### Connect the Relay Module for the pump:

Connect the NC port to the Arduino 5V. 
Connect the VCC and GND pins of the relay module to the 5V and GND ports on the Arduino.
Connect the control signal pin of the relay module to the digital port PC1 on the Arduino.


### Connect the water pump to the relay module.

Connect GND to GND port on the Arduino.
Connect VCC to the Relay COM port.


## Download the Firmware:

Obtain the firmware code from the project's release.
Extract the folder.
Open the folder and execute the exe file.

## Contact
For any questions or support, please contact Jonas Henriksen at jonashenriksenprivat@gmail.com.
