#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 3

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);
DeviceAddress sensor1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sensors.begin();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  sensors.requestTemperatures();
  float temperatura = sensors.getTempC(sensor1);
  Serial.println("Temperatura: " || temperatura);
  delay(3000);
}
