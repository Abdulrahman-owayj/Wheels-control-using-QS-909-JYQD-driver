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
  if (inSerial.substring(0)== "Forward") // if arduino recieve "Forward" the motor will be enabled and move forward
    {
   digitalWrite(EL, HIGH);
   digitalWrite(Forw_Back, HIGH);
    }
  else if (inSerial.substring(0) == "Backward") // if arduino recieve "Backward" the motor will be enabled and move Backward
    {
   digitalWrite(EL, HIGH);
   digitalWrite(Forw_Back, LOW);
    }
  else if (inSerial.substring(0) == "Stop") //if arduino recieve "Stop" the motor will Stop
  digitalWrite(EL, LOW);
  }

  

}
