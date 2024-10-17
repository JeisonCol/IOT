/*
Date: 19-09-2024
Developer: Jeison Maigual
Sketch: GEt temperature and humidity drom DHT11 Sensor

*/
#include "DHT.h"
#define DHTTYPE DHT11
#define DHTPIN 12

float temp = 0;
float hum = 0;

DHT dht(DHTPIN,DHTTYPE);

void setup() {
  
  dht.begin();
  Serial.begin(9600);

}

void loop() {
  
  temp = dht.readTemperature();
  hum = dht.readHumidity();

  Serial.print("temperatura:  ");
  Serial.println(temp);
  Serial.print("Humendad:  ");
  Serial.println(hum);

  delay(2000);

}
