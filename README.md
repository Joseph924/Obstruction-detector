Obstruction Detector using LDR and Arduino Nano
This project implements an obstruction detector using an LDR (Light Dependent Resistor) and an Arduino Nano. The system detects obstacles in its path by measuring the amount of light reflected by the obstacle and triggers an alarm (in this case, an LED) when an obstacle is detected.

Components Used
Arduino Nano
LDR (Light Dependent Resistor)
10K Ohm Resistor
LED
Breadboard
Jumper Wires
Circuit Diagram
Circuit Diagram

Usage
Connect the LDR to analog input A0 on the Arduino Nano.
Connect the LED to digital pin 13 on the Arduino Nano.
Upload the code to the Arduino Nano using the Arduino IDE or another compatible programming environment.
Run the circuit by supplying power to the Arduino Nano.
Code Explanation
The code uses the analogRead() function to read the LDR value from analog input A0. It then compares this value to a predefined low and high threshold to determine if an obstacle is present. If the LDR value is below the low threshold, the LED is turned on and a message is printed to the serial monitor indicating that an obstacle has been detected. If the LDR value is above the high threshold, the LED is turned off. If the LDR value is between the low and high thresholds, nothing is done.

Future Improvements
Add a buzzer to the circuit for a more noticeable alarm.
Use a servo motor to rotate the LDR and detect obstacles in a wider range.
Add Bluetooth connectivity to send notifications to a mobile device when an obstacle is detected.
Developer
Joseph oigo
