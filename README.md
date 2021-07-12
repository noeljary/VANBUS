# VANBUS
Circuits and MCU Code for Camper Van Electronics Control Systems

VANBUS will be a series of circuit boards designed to control all electronic systems within a camper van conversion. It is based on a CANBUS network for inter-board communiciations.

This repository contains the Autodesk EAGLE files for the circuit boards, links to the custom designed cases, and the microcontroller code used to control the system.

Boards:
- LIGHTING_CTL_BOARD: Circuit Board for PWM Control of LED Lighting
- MOSFET_CTL_BOARD: Circuit Board for Fused Power Distribution with Voltage/Current per Channel Monitoring
- REMOTE_SWITCH_BOARD: Circuit Board for Remote Switching of MOSFET/Lighting Circuits with Momentary/Latched Switching, and Status Indication
- CAPACITIVE_SWITCH_BOARD: Circuit Board for Dimming Control of Lighting Circuits with Capacitive Touch Slider
- MOSFET_POC: Proof of Concept Circuit Board for MOSET based solid state relay system
- VANBUS_HUB: Circuit Board for Central Connection of CANBUS connectors where daisy chaining is not possible
