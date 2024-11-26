#include <Arduino.h>
#include <WiFi.h>


const char* ssid = "Esp32";
const char* password = "12345678";

void setup()
{
Serial.begin(115200);

WiFi.mode(WIFI_AP);//chế độ phát wifi
WiFi.softAP(ssid,password);

if(!WiFi.softAP(ssid, password))
{
  Serial.println("Soft-Ap setup fail");
  while(true);
}
  Serial.println("Soft-Ap setup success");
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP()); //xuất IP của esp32
  
}




void loop()
{

}

