#include <arduino.h>

int temp, analog_sensor;
const int sensor_pin = A0; // chân Vp


void setup()
{
  Serial.begin(115200);
  delay(1000);
  pinMode(sensor_pin, INPUT);
}

void loop()
{
  analog_sensor = analogRead(sensor_pin);
  temp = analog_sensor / 8.19; // 12bit
  Serial.print("analog = ");
  Serial.println(analog_sensor);
  Serial.print(" temp= ");
  Serial.print(temp);
  Serial.println(" do");
  delay(1000);

  
}
