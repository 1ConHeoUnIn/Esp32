#include <Arduino.h>
#include<WiFi.h>
#include<WiFiUdp.h>
const char* ssid = "460 Kim Son" ;// cái này để nhập tên wifi nè
const char* password = "12356789"; // cái này nhập mật khẩu dzô

WiFiUDP udp;
const char* udpAddress = "192.168.1.74"; // Địa chỉ IP của máy nhận
const int udpPort = 1234; // Cổng UDP

void setup()
{
Serial.begin(115200); // tạo ra một serial để quan sát
delay(1000); // đợi cho serial ổn định xíu

// Bây giờ thì kết nối mạng
Serial.println("Connecting.....");
WiFi.begin(ssid,password); // khởi động quá trình kết nối wifi

//Chờ
while (WiFi.status() != WL_CONNECTED)
{
    delay(500);
    Serial.println(".");

}
// Khi kết nối thành công
Serial.println("\n Connect successful");
Serial.println("IP Address: ");
Serial.println(WiFi.localIP());
udp.begin(udpPort);
}
void loop ()
{
  udp.beginPacket(udpAddress, udpPort); // Bắt đầu gói tin
  const char*  message = "Hello, World!"; // Nội dung gói tin
  for (size_t i = 0; i < strlen(message); i++) {
    udp.write(message[i]);  // Gửi từng ký tự
  }
  udp.endPacket(); // Gửi gói tin
  delay(1000); // Đợi trước khi gửi gói tin tiếp theo
}