#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);

  Serial.println("Starting scan...");
  int n = WiFi.scanNetworks();
  Serial.println("Scan done.");

  for (int i = 0; i < n; ++i) {
    Serial.print("SSID: ");
    Serial.print(WiFi.SSID(i));
    Serial.print(", Channel: ");
    Serial.println(WiFi.channel(i));
  }
}

void loop() {
  // Không cần thực hiện gì trong loop
}