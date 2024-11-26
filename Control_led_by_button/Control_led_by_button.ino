
int led =12;
int button =5;
int button_state;
int led_state;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);

}

void loop() {
 button_state =digitalRead(button); // chưa nhấn thì bằng 0
 led_state = digitalRead(led);
if(button_state==1)
{
  Serial.println(led_state);
  digitalWrite(led,HIGH);
}
else
{
  Serial.println(led_state);
  digitalWrite(led,LOW);
}



}
