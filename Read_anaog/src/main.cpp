#include <Arduino.h>
#define input_pin 34

int value;
void setup() {
Serial.begin(115200);
delay(200);

}

void loop() {
value=analogRead(input_pin);
Serial.println(value);
delay(1000);
}


