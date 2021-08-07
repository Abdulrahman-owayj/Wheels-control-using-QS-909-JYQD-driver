# Wheels-control-using-QS-909-JYQD-driver
In this repository, i used QS-909 JYQD motor driver with motor hall sensor input and arduino uno to control the robot wheel.

## What is QS-909 JYQD motor driver
Its a motor driver with direction and speed control, used to control brushless motor. It use 12 - 36V, up to 500W (you need heat sink for more than 60W). comes in two variants: 1) with motor hall sensor input and 2) sensorless.

### #Here i used this version (with motor hall sensor)
![qs_909_jyqd](https://user-images.githubusercontent.com/5675794/128578707-b0574dfe-6ad1-4b16-aa24-4347535a04cf.jpg)

**#You can check some videos about it Like this :** https://youtu.be/gH4Vb8bXj34

### #Wiring and pinout

![image](https://user-images.githubusercontent.com/5675794/128578907-d194512f-666f-49d4-9aad-5df4f9b51a6a.png)

![image](https://user-images.githubusercontent.com/5675794/128578903-406b8429-fd5d-497a-b31c-6c52757f4bfc.png)

### #How to control the driver
**Connect EL (motor enable) to 5v, Z/F to 5v (foward direction) or 0V (Backward direction). you can Connect potentiometer for speed control (pins: 5v, VR, GND)**


## Schematic and Arduino code
.
### #Schematic
.
![motor driver with wheel](https://user-images.githubusercontent.com/5675794/128579091-7b3ced3e-dd8e-40bc-b092-435babe34981.png)

### #Arduino Code

```ruby
int EL = 2;
int Forw_Back = 4;


void setup() {
pinMode(EL, OUTPUT);
pinMode(Forw_Back,OUTPUT);
Serial.begin(9600);

}

void loop() {

 //this arduino will receive serial data from main controller of the robot to determine some variables

 while(Serial.available() > 0 )
 {
  String inSerial = Serial.readString();
  if (inSerial.substring(0)== "Forward")                 // if arduino recieve "Forward" the motor will be enabled and move forward
    {
   digitalWrite(EL, HIGH);
   digitalWrite(Forw_Back, HIGH);
    }
  else if (inSerial.substring(0) == "Backward")          // if arduino recieve "Backward" the motor will be enabled and move Backward
    {
   digitalWrite(EL, HIGH);
   digitalWrite(Forw_Back, LOW);
    }
  else if (inSerial.substring(0) == "Stop")             //if arduino recieve "Stop" the motor will Stop
  digitalWrite(EL, LOW);
  }

  
}
```





