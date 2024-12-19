#include <Arduino.h>
#define led1 2
#define nut 4
bool state = 0, en = 0;
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(nut, INPUT);
}

// the loop function runs over and over again forever
void loop()
{
  if (digitalRead(nut) == 1 && state == 0 && en == 1)
  {
    Serial.println(digitalRead(nut));
    digitalWrite(led1, 1);
    state = 1;
    en = 0;
  }
  else if (digitalRead(nut) == 1 && state == 1 && en == 1)
  {
    digitalWrite(led1, 0);
    state = 0;
    en = 0;
  }
  if (digitalRead(nut) == 0)
  {
    en = 1;
  }
  delay(100); // wait for a second
}
