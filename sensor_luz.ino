//COPIA DESDE AQUÍ

const int sensorPin = A0;    // pin conectado al sensor
const int ledPin = 9;        // pin conectado al led

int sensorValue = 0;         // valor incial del sensor
int sensorMin = 1023;        // valor mínimo del sensor
int sensorMax = 0;           // valor máximo del sensor


void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);

  digitalWrite(13, LOW);
}

void loop() {
  // lee el sensor:
  sensorValue = analogRead(sensorPin);
 
  analogWrite(ledPin, 1000 - sensorValue);
}

//HASTA AQUÍ

/*
¿Por qué hacemos 1000 - sensorValue? 
Porque si escribiéramos sólo sensor value se iluminaría al mismo valor que capta la luz, 
es decir, si está muy iluminado, imaginemos al maximo (1023), el led se iluminaria tambien 
al máximo. ¡Lo que queremos es lo contrario!
*/
