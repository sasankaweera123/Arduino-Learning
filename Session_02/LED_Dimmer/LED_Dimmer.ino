#define LED  13 // The pin the LED is connected to 5 
// for analogwrite we need to use 1-6 pin to get expexted outcomes

// Can use int LED = 5 also

void setup() {
  pinMode(LED, OUTPUT); // Declare the LED as an output
}

void loop() {
    // brightness ratio 0-255
  analogWrite(LED, 0); // Turn the LED brightness 0
  delay(500); // Give a Delay 
  analogWrite(LED, 10); // Turn the LED brightness 10
  delay(500); // Give a Delay 
  analogWrite(LED, 100); // Turn the LED brightness 100
  delay(500); // Give a Delay 
  analogWrite(LED, 150); // Turn the LED brightness 150
  delay(500); // Give a Delay 
  analogWrite(LED, 255); // Turn the LED brightness 255
}
