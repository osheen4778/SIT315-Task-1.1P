
int pin = 2;  //declaring pin 2 for interrupts

volatile int state = LOW;  //declaring it as volatile and initializing as low 

void setup()
{
  pinMode(13, OUTPUT); //set pinmode as output for pin 13
  pinMode(2,  INPUT);  //set pinmode as input for pin 2
  
  attachInterrupt(digitalPinToInterrupt(pin),flash, CHANGE); //attaching interrupt at pin 2 to blink when it changes value i.e., motion is detected
  
  }

 void loop(){
 }

void flash() {
  state = !state;  //toggle state when interrupt occurs 
  digitalWrite(13, state);  //pin 13 as new value of state
}
