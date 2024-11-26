
#include<arduino.h>
 int h=23;
 int m=59;
 int s=59;
void setup()
{
    Serial.begin(115200);

}
void loop()
{
   
    for( int i=0; i<60; i++)
    {
       Serial.print(h);
    Serial.print(" : ");
      Serial.print(m);
    Serial.print(" : ");
      Serial.println(s);
       delay(1000);
        s++;
       
        if(s>=60)
        {
          s=0;
          m++;
  
        }
        
        if(m>=60)
        {
          m=0;
          h++;
        }

        if (h>=24)
        {
          h=0;
         
        }
        
      
  
    }
   
    
}

