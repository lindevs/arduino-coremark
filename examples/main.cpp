#include <Arduino.h>
#include <core_arduino.h>

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    startCoremark();
    delay(5000);
}
