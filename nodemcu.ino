
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "b04cc8f47ec04c64a0bcaa65021ef061";


char ssid[] = "error404";
char pass[] = "12345678";

int k;
BLYNK_WRITE(V1)
{
  int pinValue = param.asInt(); 
k=pinValue;
}

void setup()
{

  Serial.begin(9600);
pinMode(1,OUTPUT);
  Blynk.begin(auth, ssid, pass);
 
}

void loop()
{
 
  Blynk.run();
  if(k==1)
  {
   digitalWrite(1, HIGH); 
  }
  if(k==1)
  {
   digitalWrite(0, LOW); 
  }
}

