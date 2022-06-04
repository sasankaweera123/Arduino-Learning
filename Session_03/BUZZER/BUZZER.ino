#define buzzer 6

void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 6 as an output

}

void loop(){
 
  tone(buzzer, 800); // Send 800Hz sound signal
  delay(1000);        // delay 1 sec
  noTone(buzzer);     // Stop sound
  delay(1000);        // delay 1sec
  
}