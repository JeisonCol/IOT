const int Rojo = 13;
const int Amarillo = 12;
const int Verde = 11;

void setup() {
  pinMode(Rojo, OUTPUT);
  pinMode(Amarillo, OUTPUT);
  pinMode(Verde, OUTPUT);
}

void loop() {
  digitalWrite(Rojo , HIGH);
  digitalWrite(Amarillo , LOW);
  digitalWrite(Verde , LOW);
  delay(2000);
  
  digitalWrite(Rojo , LOW);
  digitalWrite(Amarillo , HIGH);
  digitalWrite(Verde , LOW);
  delay(2000);
  
  digitalWrite(Rojo , LOW);
  digitalWrite(Amarillo , LOW);
  digitalWrite(Verde , HIGH);
  delay(1500);
  
}