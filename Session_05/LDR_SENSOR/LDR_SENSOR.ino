#define ledPin  5 // digital pin 5 
#define ldrPin  A0 // analog pin 0

void setup(){
    pinMode(ledPin, OUTPUT); // Here LED is determined as an output or an indicator.
    pinMode(ldrPin, INPUT); // Here LDR sensor is determined as input.
}

void loop(){
    int ldrStatus = analogRead(ldrPin); //get the ldr value

    if (ldrStatus <= 200){ // get the condition based on ldr value to shadows
        digitalWrite(ledPin, HIGH); //LED ON
    }else{
        digitalWrite(ledPin, LOW); // LED OFF
    }

}