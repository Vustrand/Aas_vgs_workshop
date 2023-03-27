#include <dht.h>

#define dht_apin A0 // Analog Pin sensor is connected to
int LED = 13;

dht DHT;


void setup(){

  pinMode(LED, OUTPUT);
 
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor

 
}//end "setup()"
 
void loop(){
  //Start of Program 
  
    DHT.read11(dht_apin);

    if(DHT.temperature > 28){   // om temperaturen er mer enn 28 grader skrus lyset på
    digitalWrite(LED, HIGH); // turn on the LED
    delay(1000);}
 
//    if(DHT.humidity > 80){
//    digitalWrite(LED, HIGH); // turn on the LED
//    delay(1000);}

    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
    delay(3000);//Wait 5 seconds before accessing sensor again.
    digitalWrite(LED,LOW);  // turn of LED
  //Fastest should be once every two seconds.
 
}// end loop(
