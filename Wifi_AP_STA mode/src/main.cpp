#include <Arduino.h>
#include <WiFi.h>

const char* ssid ="460 Kim Son";
const char* password = "12356789";
const char* ssidAP ="Esp32";
const char* passwordAP = "12345678";

void setup ()
{
  Serial.begin(115200);
  delay(1000);


WiFi.mode(WIFI_AP_STA);

//kết nối wifi
Serial.println("Connecting...");
WiFi.begin(ssid,password);
while(WiFi.status() != WL_CONNECTED)
{
Serial.println(".");
delay(1000);
}
Serial.println("Connect sussecfully");
Serial.print("Wifi local IP: ");
Serial.println(WiFi.localIP());


int channel =WiFi.channel(); // lấy kênh kết nối 

if(!WiFi.softAP(ssidAP, passwordAP,channel))
{
  Serial.println("Soft-Ap setup fail");
  while(true);
}
  Serial.println("Soft-Ap setup success");
  Serial.print("AP IP address: ");
  Serial.println(WiFi.softAPIP()); //xuất IP của esp32
  
}
void loop ()
{

}

