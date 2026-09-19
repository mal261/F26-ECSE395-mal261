# Lab 4: Actuators and Sensors
## Submitted by Martin Lopez

This is the third lab using the ESP32 Feather V2 board. This lab is focused on connecting actuators to the ESP32, specifically a TT motor and a servo motor, and controlling them through software written to the ESP32.

All code files can be found in the "src" directory in the same directory of this markdown file.

I will use the PlatformIO commandline tools and a text editor (Neovim) in Linux to complete the lab.

## TT Motor

The files starting with "TT Motor" utilize a TT Motor and a motor driver module. The circuit for this part of the lab can be seen below.

![TT Motor Circuit](photos/TTMotor.jpg)

The code in "TT Motor.cpp" rotates the TT Motor for five seconds and stops. The TT Motor operation is determined by setting two pin values. The difference between the two pins determines the speed of the motor.

The code in "TT Motor Rotate.cpp" rotates it continually in a loop. The code in "TT Motor EC.cpp" increasees and decreases the speed of rotation.

## Servo Motor

The files starting with "Servo Motor" utilize a servo motor. The circuit for this part of the lab can be seen below.

![Servo Motor Circuit](photos/ServoMotor.jpg)

The code in "Servo Motor.cpp" controls the servo to move 180 degrees both clockwise and counter-clockwise. The following values are used:
* minPulseWidth and maxPulseWidth set the range of pulse width for the servo; the pulse width determines what angle the servo rotates to 
* setPeriodHertz controls how often the servo is updated
* the rotation range is mapped to the pulse width
* the delay determines how often a write to the servo is done

The code in "Servo Motor Random.cpp" randomly rotates the servo within a 180 degree rotation.

## Reflection
1. This lab took me around 2 hours to complete.
2. I would associate this lab with a medium level of difficulty.
3. The most difficult part of this lab were some issues regarding the external power supply's output and figuring out the general function of the motors.
4. I'm fairly comfortable with the course content so far.
5. No feedback.
