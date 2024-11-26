#include <Arduino.h>


int moisture, analog_sensor;
const int sensor_pin =A0; //chân Vp
const int relay = 17;

void setup() {
 Serial.begin(115200);
 pinMode(relay, OUTPUT);
 digitalWrite(relay, LOW);

}

void loop() {
  analog_sensor= analogRead(sensor_pin);
  moisture= (100 - (analog_sensor/4095.00)*100) ; //12bit
Serial.print("analog = " );
  Serial.println(analog_sensor);
  Serial.print(" moisture = " );
  Serial.print(moisture);
  Serial.println("%");
  delay(300);

  if (moisture<20)
  {
    digitalWrite(relay, HIGH);
    Serial.println("bad");
  }
  else 
  {
    digitalWrite(relay,LOW);
    Serial.println("good");
  }
  delay(1000);
}

