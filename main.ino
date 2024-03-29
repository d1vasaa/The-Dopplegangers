#include <Q2HX711.h>

const byte hx711_data_pin = 3;
const byte hx711_clock_pin = 4;

Q2HX711 hx711(hx711_data_pin, hx711_clock_pin);

void setup() {
  Serial.begin(9600); // prepare serial port
  delay(1000); // allow load cell and hx711 to settle
}

void loop() {
  Serial.println(hx711.read()/100.0);
  delay(1500);
}
