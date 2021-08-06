# Wheels-control-using-QS-909-JYQD-driver
In this repository, i used QS-909 JYQD motor driver with motor hall sensor input and arduino uno to control the robot wheel.

## What is QS-909 JYQD motor driver
Its a motor driver with direction and speed control, used to control brushless motor. It use 12 - 36V, up to 500W (you need heat sink for more than 60W). comes in two variants: 1) with motor hall sensor input and 2) sensorless.

### Here i used this version (with motor hall sensor)
![image](https://user-images.githubusercontent.com/5675794/128578597-38af5660-7b9a-48df-8194-c6804d6b703d.png)


![image](https://user-images.githubusercontent.com/5675794/128578592-bd6dd72f-1833-4b2d-82a8-ad75e3ccc0dd.png)

### Wiring and pinout

5v       5v output
EL       Motor enable input (5v)
Signal   speedometer output
Z/F      forward/reverse control (5v/GND)
VR       speed control (0..5v)
GND      ground

5v    5v output
Ha    motor hall sensor input phase 1
Hb    motor hall sensor input phase 2
Hc    motor hall sensor input phase 3
GND   ground
