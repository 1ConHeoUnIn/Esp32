#include <Arduino.h>
#include <LiquidCrystal_I2C.h> //21 SDA , 22 SCL

LiquidCrystal_I2C lcd(0x27, 16, 2); // Địa chỉ của I2C, 16 cột, 2 hàng

void setup()
{
  Serial.begin(115200);
  lcd.init();                     // Khởi động LCD
  lcd.backlight();                // Bật đèn nền (chú ý: phải viết chữ thường)
 
  lcd.setCursor(0, 0);            // Đặt con trỏ ở cột 3, hàng 1
  lcd.print("hello");              // In ra "hell" trên màn hình
}

void loop()
{
  // Vòng lặp chính
}