#include <DHT.h>      // Include the DHT library

#define DHTPIN 2      // Define the pin for DHT11 sensor
#define DHTTYPE DHT11 // Set the type of DHT sensor

DHT dht(DHTPIN, DHTTYPE); // Create a DHT object

void setup() {
  Serial.begin(9600);   // Start the serial communication
  dht.begin();          // Initialize the DHT sensor   
}

void loop() {
  float temperature = dht.readTemperature(); // Read the temperature from the DHT sensor
  float humidity = dht.readHumidity();

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" *C");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println("%  ");

  delay(1000);            // Wait for 5 seconds before reading the temperature again
}
