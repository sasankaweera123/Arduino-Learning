void setup() {
  pinMode(11,OUTPUT); // Connect to pin 11
  

}

void loop() {
  digitalWrite(11,HIGH); // high
  delay(500); // Have a delay
  digitalWrite(11,LOW); // low

}