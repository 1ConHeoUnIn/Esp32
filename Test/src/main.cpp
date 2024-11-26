#include <Arduino.h>

void setup() {
    Serial.begin(9600); // Khởi động giao tiếp Serial với tốc độ 9600 bps
}

void loop() {
    // Lấy thời gian bắt đầu
    unsigned long t0 = micros(); // Trả về số microseconds đã trôi qua từ khi vi điều khiển được khởi động

    delay(1000); // Chờ 1 giây (1000 milliseconds)

    // Tính thời gian đã trôi qua
    unsigned long ti = micros() - t0; // Tính thời gian đã trôi qua từ t0 đến bây giờ

    // Chuyển đổi microseconds sang giây
    unsigned long seconds = ti / 1000000; // Chia cho 1 triệu để lấy số giây
    unsigned long minutes = seconds / 60; // Tính số phút
    unsigned long hours = minutes / 60; // Tính số giờ

    // Tính số giây và phút còn lại
    seconds = seconds % 60; // Số giây còn lại
    minutes = minutes % 60; // Số phút còn lại

    // In thời gian đã trôi qua
    Serial.print("Thời gian đã trôi qua: ");
    Serial.print(hours); // In số giờ
    Serial.print(" giờ, ");
    Serial.print(minutes); // In số phút
    Serial.print(" phút, ");
    Serial.print(seconds); // In số giây
    Serial.println(" giây"); // In "giây" và xuống dòng

    delay(1000); // Chờ 1 giây trước khi lặp lại
}