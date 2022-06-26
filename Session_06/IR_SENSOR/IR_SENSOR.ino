int IRSensor = 9; // connect ir sensor module to Arduino pin 9
int LED = 13; // conect LED to Arduino pin 13

void setup()
{
  pinMode(IRSensor, INPUT); // IR Sensor pin INPUT
  pinMode(LED, OUTPUT); // LED Pin Output
}

void loop()
{
  int sensorStatus = digitalRead(IRSensor); // Set the GPIO as Input
  if (sensorStatus == 1){ // Check if the pin high or not
    // if the pin is high turn off the onboard Led
    digitalWrite(LED, LOW); // LED LOW Motion Ended

  }
  else{
    //else turn on the onboard LED
    digitalWrite(LED, HIGH); // LED High Motion Detected
  }
}