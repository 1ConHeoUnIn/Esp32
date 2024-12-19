#include <arduino.h>
#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT11 // DHT 11

DHT dht(DHTPIN, DHTTYPE);
float humid, temp;

void setup()
{
  Serial.begin(115200);
  dht.begin();
}

void loop()
{

  humid = dht.readHumidity();
  temp = dht.readTemperature();
  Serial.print("temp: ");
  Serial.println(temp);
  Serial.print("humid: ");
  Serial.println(humid);
  delay(2000);
}
