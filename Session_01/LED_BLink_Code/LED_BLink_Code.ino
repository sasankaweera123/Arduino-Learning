#define LED 13  // The pin the LED is connected to

// Can use int LED = 13 also

void setup() {
  pinMode(LED, OUTPUT); // Declare the LED as an output
}

void loop() {
  digitalWrite(LED, HIGH); // Turn the LED on
  delay(500); // Give a Delay 
  digitalWrite(LED, LOW); // Turn the LED off
}
