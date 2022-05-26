#include <RH_ASK.h>
#include <SPI.h> // Not actualy used but needed to compile

RH_ASK driver;

void setup()
{
    Serial.begin(115200);
    if (!driver.init()) {
      Serial.println("init failed");
    } else {
      Serial.println("init success!");
    }    
    pinMode(7,OUTPUT);
    pinMode(6,OUTPUT);
    
    pinMode(5,OUTPUT);
    pinMode(4,OUTPUT);

}

void loop()
{    
    uint8_t buf[50];
    memset(buf, 0, 50);
    uint8_t buflen = sizeof(buf);
    if (driver.recv(buf, &buflen))
    {    
      String message = (char*)buf;                                                  
      Serial.print("Message: ");
      Serial.println(message);                   

      if (message.equals("260")) {
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        digitalWrite(5,HIGH);
        digitalWrite(4,LOW);
        } 
    delay(100);
}
}
