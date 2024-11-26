#include <Arduino.h>
#include <WiFi.h>
#include <WiFiUdp.h>
const char* ssid ="460 Kim Son";
const char* password= "12356789";
WiFiUDP udp;
const char* udpAddress = "192.168.1.63"; // Địa chỉ IP của máy nhận
const int udpPort = 1234; // Cổng UDP


void setup() {
  Serial.begin(115200);
  WiFi.begin("yourSSID", "yourPASSWORD"); // Kết nối WiFi
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected to WiFi");
}

void loop() {
 String response = "Message received!";
    udp.beginPacket(udp.remoteIP(), udp.remotePort()); 
    udp.write(response.c_str());
    udp.endPacket();

}

