# Wheels-control-using-QS-909-JYQD-driver
In this repository, i used QS-909 JYQD motor driver with motor hall sensor input and arduino uno to control the robot wheel.

## What is QS-909 JYQD motor driver
Its a motor driver with direction and speed control, used to control brushless motor. It use 12 - 36V, up to 500W (you need heat sink for more than 60W). comes in two variants: 1) with motor hall sensor input and 2) sensorless.

### #Here i used this version (with motor hall sensor)
![qs_909_jyqd](https://user-images.githubusercontent.com/5675794/128578707-b0574dfe-6ad1-4b16-aa24-4347535a04cf.jpg)


### #Wiring and pinout

![image](https://user-images.githubusercontent.com/5675794/128578907-d194512f-666f-49d4-9aad-5df4f9b51a6a.png)

![image](https://user-images.githubusercontent.com/5675794/128578903-406b8429-fd5d-497a-b31c-6c52757f4bfc.png)

### #How to control the driver
Connect EL (motor enable) to 5v, Z/F to 5v (foward direction). Connect a 10k potentiometer for speed control (pins: 5v, VR, GND)


## Schematic diagram and Arduino code


