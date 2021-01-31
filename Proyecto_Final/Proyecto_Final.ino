#include <SoftwareSerial.h>
SoftwareSerial ESPserial(3, 1); // RX | TX
uint8_t color=0x00;

int i=0;
String cadena;
unsigned long lastMsg=0;
unsigned long now=0;
void setup() {
  
  Serial.begin(115200);
  //ESPserial.begin(115200);
  


//while(!Serial) continue;
}

void loop() {
  
  
    //if(ESPserial.available()>0) {
      
    
    //delay(10);
   
    now=millis();
    if (now-lastMsg>2000)
    {
      Serial.write( color );
      Serial.print("numero: ");
        color=color+1;
        i=i+1;
        
        if (i>7)
        {
          color=0x00;
          i=0;
        }
        Serial.println(color);
        lastMsg=now;
    }
    //}
    
    delay(10);
   
}

//void checkSerialCom(){
  
