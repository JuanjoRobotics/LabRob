#include <SoftwareSerial.h>
SoftwareSerial ESPserial(3, 1); // RX | TX
uint8_t color[2];

int i=0;
String cadena;
unsigned long lastMsg=0;
void setup() {
  
Serial.begin(115200);
ESPserial.begin(115200);
Serial.println("Dale carla, enseña un numero");
color[0]=1;
color[1]=4;

while(!Serial) continue;
}

void loop() {
    if(ESPserial.available()>0) {
      
    Serial.write( color[i] );
    delay(10);
   
    unsigned long now=millis();
    if (now-lastMsg>3000)
    {
        i=i+1;
        
        if (i>1)
        {
          i=0;
        }
        Serial.println(color[i]);
        lastMsg=now;
    }
    }
    
    
    
   
}
