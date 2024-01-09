#include <Arduino.h> // Including Arduino Header file to run this program in PlatformIO in VSCode
void setup() 
{
  Serial.begin(9600); // Initialising Serial Monitor at 9600 baud rate
  pinMode(12,INPUT); // GPIO1 pin is used for connnecting PIR Sensor and it is an Input Signal
}

void loop()
{
  int pir=digitalRead(12); // 'pir' variable is used for reading the sensor value
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