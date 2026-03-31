#include "DHT.h"

#define DHTPIN 7
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

int greenLED = 2;
int redLED = 3;
int relayPin = 8;

void setup() {
  Serial.begin(9600);
  dht.begin();

  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  float temp = dht.readTemperature();

  if (isnan(temp)) {
    Serial.println("Sensor error!");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");

  if (temp < 25) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(relayPin, LOW);   // Fan OFF
  } 
  else {
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);
    digitalWrite(relayPin, HIGH);  // Fan ON
  }

  delay(2000);
}