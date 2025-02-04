int value = 0;
int sensor = 5  ;

void setup() {
    Serial.begin(115200);
    pinMode(sensor,INPUT);
    pinMode(LED_BUILTIN, OUTPUT);
   
}
 
void loop()
{
    value = digitalRead(sensor);
     
         
        if(value == 0)
        {
          Serial.println(value);
         /* digitalWrite(LED_BUILTIN, HIGH);
          delay(100);
          digitalWrite(LED_BUILTIN, LOW);
          delay(100);*/
        }
        else{
          Serial.println(value);
          //digitalWrite(LED_BUILTIN, LOW);
        }

}  

  
  
