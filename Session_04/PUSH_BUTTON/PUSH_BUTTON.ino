const int buttonPin = 2; //button pin 
const int button = 0; // button status

void setup(){
 
  pinMode(buttonPin, INPUT);// Set buttonPin - pin 2 as an output
  // pinMode(buttonPin, INPUT_PULLUP); and can use the inbuilt resistor

  Serial.begin(9600); //Open the serial monitor in chanel 9600

}

void loop(){
 
  button = digitalRead(buttonPin); // get the button read
  Serial.println(button); // print the button status in serial monitor 
  
  
}