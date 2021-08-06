# Wheels-control-using-QS-909-JYQD-driver
In this repository, i used QS-909 JYQD motor driver with motor hall sensor input and arduino uno to control the robot wheel.

## What is QS-909 JYQD motor driver
Its a motor driver with direction and speed control, used to control brushless motor. It use 12 - 36V, up to 500W (you need heat sink for more than 60W). comes in two variants: 1) with motor hall sensor input and 2) sensorless.

### Here i used this version (with motor hall sensor)
![qs_909_jyqd](https://user-images.githubusercontent.com/5675794/128578707-b0574dfe-6ad1-4b16-aa24-4347535a04cf.jpg)


### Wiring and pinout

5V (5V output), EL (Motor enable), Signal (speedometer output), Z/F (forward/reverse control (5v/GND)), VR (speed control (0..5v)), GND (ground).

