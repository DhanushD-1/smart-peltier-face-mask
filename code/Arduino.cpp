#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

#define PELTIER_PIN 9

DHT dht(DHTPIN, DHTTYPE);

float thresholdTemp = 30.0;

void setup() {
  Serial.begin(9600);
  pinMode(PELTIER_PIN, OUTPUT);
  dht.begin();
}

void loop() {

  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("Sensor error");
    return;
  }

  Serial.print("Temperature: ");
  Serial.println(temperature);

  if (temperature > thresholdTemp) {
    digitalWrite(PELTIER_PIN, HIGH);
    Serial.println("Cooling ON");
  }
  else {
    digitalWrite(PELTIER_PIN, LOW);
    Serial.println("Cooling OFF");
  }

  delay(2000);
}