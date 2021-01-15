int LedPin = 13;
void function_1() {
  if (LedPin=HIGH); {
 Serial.print("The led Pin is on high"); //Prints on the serial monitor "The led Pin is on high"
}
if (LedPin=LOW); {
 Serial.print("The led Pin is on low"); //Prints on the serial monitor "The led Pin is on low"
}
 }

void setup() {
  Serial.begin(9600); /*Starts a serial connection between the
  computer and the arduino*/
 
}


void loop() {
 digitalWrite (LedPin,  HIGH); //Makes pin 13 on high
 delay(1000); //Delay for one second
 digitalWrite (LedPin,  LOW); //Makes pin 13 on low
 delay(1000); //Delay for one second
 function_1;

 }
 
