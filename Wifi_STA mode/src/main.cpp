#include <Arduino.h>
#include <WiFi.h>

const char* ssid = "Huu Ngan 5G"; // nhập tên wifi
const char* password = "22222222H"; // nhập mật khẩu

void setup()
{
Serial.begin(115200);
WiFi.mode(WIFI_STA);


Serial.println("Connecting......");
WiFi.begin(ssid, password);

// Chờ
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.println(".");
    }
    // Khi kết nối thành công
    Serial.println("\n Connect successful");
    Serial.println("IP Address: ");
    Serial.println(WiFi.localIP());
}

void loop()
{

}