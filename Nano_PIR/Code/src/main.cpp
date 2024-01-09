#include <Arduino.h> // Including Arduino Header file to run this program in PlatformIO in VSCode
void setup() 
{
  Serial.begin(9600); // Initialising Serial Monitor
  pinMode(2,INPUT); // D2 pin is used for connnecting PIR Sensor and it is an Input Signal
}

void loop()
{
  int pir=digitalRead(2); // 'pir' variable is used for reading the sensor value
  // Printing output on the Serial Monitor
  if(pir==HIGH)
  {
    Serial.println("Motion Detected!"); 
  }
  else
  {
    Serial.println("Motion NOT Detected!");
  }
  delay(500); // Delay of 500 ms is provided
}