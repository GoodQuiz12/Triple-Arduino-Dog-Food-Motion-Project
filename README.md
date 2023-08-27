# Triple-Arduino-Dog-Food-Motion-Project
This project consists of three AT-MEGA based ARM controllers working to create an IOT dog food dispenser. This is to solve the widespread problem of dogs being underfed due to the dog not having enough food when the owner is out. My device solves this problem and helps feed the dog.

Automated Dog Food Dispenser
This project is an automatic dog food dispenser that uses motion sensors, servos, and transmitters/receivers. It uses 2 Arduinos and 1 Feather M0 Packet Radio. It also uses a PIR motion sensor with HR-SR04 Ultrasonic Distance Sensor for water level detection.

Hardware:
----------
The following hardware is required for this project:
----------------------------------------------------
2 Arduinos
1 Feather M0 Packet Radio
1 PIR motion sensor
1 HR-SR04 Ultrasonic Distance Sensor
1 LCD
1 servo motor
2 food hoppers
2 food bowls
2 breadboards
Jumper wires

Software
---------
The following software is required for this project:

Arduino IDE
RadioHead Library
Servo Library

Instructions:
-------------
Connect the hardware as shown in the schematic.
Upload the code to the Arduinos.
Fill the food hopper with food.
Place the food bowl under the servo motor.
Set the PIR motion sensor to detect motion.
Set the HR-SR04 Ultrasonic Distance Sensor to detect the water level.

Operation:
----------
* When the PIR motion sensor detects motion, the Arduinos will send a signal to the servo motor, which will dispense food into the food bowl.
* If the HR-SR04 Ultrasonic Distance Sensor detects that the water level is low, The Feather M0 Packet Radio will then send a signal to an LCD, telling the OWNER the water level is low.

Troubleshooting:
----------------
If the project is not working, here are some things to check:
-------------------------------------------------------------
Make sure that the hardware is connected correctly.
Make sure that the code is uploaded correctly.
Make sure that the PIR motion sensor is detecting motion.
Make sure that the HR-SR04 Ultrasonic Distance Sensor is detecting the water level.
