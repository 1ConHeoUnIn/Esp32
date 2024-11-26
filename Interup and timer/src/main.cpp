#include <Arduino.h>

#define button 27  // Chân nút
#define led 26     // Chân LED

// Hàm ngắt
void IRAM_ATTR detectPush() {
    // Bật LED khi nút không nhấn
    digitalWrite(led, HIGH);
}

void setup() {
    Serial.begin(115200);           // Khởi động Serial
    pinMode(button, INPUT_PULLUP);  // Cấu hình chân button là đầu vào với điện trở kéo lên, chưa nhấn thì HIGH
    pinMode(led, OUTPUT);            // Cấu hình chân LED là đầu ra
    digitalWrite(led, LOW);          // Tắt LED ban đầu

    // Thiết lập ngắt: gọi detectPush() khi có tín hiệu RISING (nút được nhấn)
    attachInterrupt(digitalPinToInterrupt(button), detectPush, RISING); // rising là từ low sang high
}

void loop() {
    // Kiểm tra trạng thái của nút
    if (digitalRead(button) == LOW) {
        // Nếu nút được nhấn, tắt LED
        digitalWrite(led, LOW);
    }
}