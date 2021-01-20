//Arduino code
#include <SoftwareSerial.h>
SoftwareSerial Arduino(15,14);
 
void setup() {
Arduino.begin(115200);
}
 
void loop() {
int data=50;
if(Arduino.available()>0)
{
 Arduino.write(data);
}
}
