
int pin = 2;  //declaring pin 2 for interrupt
int secondpin = 3;  //declaring pin 3 for interrupt

volatile int state = LOW;  //declare as volatile and initialize as low

void setup()
{
  Serial.begin(9600); 
  pinMode(13, OUTPUT);  //set the pinMode as output for pin 13
  pinMode(2, INPUT);  //set the pinMode as input for pin 2
  attachInterrupt(digitalPinToInterrupt(pin), flash, CHANGE); //interrupt at pin 2 blink when pin changes the value i.e., when motion is detected
  pinMode(3, INPUT);  //set the pinMode as input for pin 3
  attachInterrupt(digitalPinToInterrupt(secondpin), flash, RISING);
}

void loop(){
}

void flash() {
  state = !state;  //toggle the state when interrupt occurs
  digitalWrite(13, state);  // pin 13 as the new state of value
  Serial.print("PIR Sensor");  //print this on serial monitor
}

void flashed() {
  state = !state;  //toggle the state when interrupt occurs
  digitalWrite(13, state);  // pin 13 as the new state of value
  Serial.print("Soil Moisture Sensor");  //print this on serial monitor
}
