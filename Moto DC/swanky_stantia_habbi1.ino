Aquí tienes el código sin comentarios:

```cpp
const int sensorTempPin = A0;
const int motorPin = 11;
const int ledPin = 10;

int tempValue = 0;
float voltage = 0.0;
float temperature = 0.0;

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  tempValue = analogRead(sensorTempPin);
  voltage = (tempValue / 1023.0) * 5.0;
  temperature = (voltage - 0.5) * 100.0;

  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");

  if (temperature >= 30) {
    digitalWrite(motorPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  } 
  else if (temperature >= 25 && temperature < 30) {
    digitalWrite(motorPin, HIGH);
    digitalWrite(ledPin, LOW);
  } 
  else if (temperature >= 10 && temperature < 25) {
    digitalWrite(motorPin, LOW);
    digitalWrite(ledPin, LOW);
  } 
  else if (temperature < 10) {
    digitalWrite(motorPin, LOW);
    digitalWrite(ledPin, HIGH);
  }

  delay(1000);
}
```