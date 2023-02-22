// C++ code
//

int pirSensor = 2; 


void setup() {
  pinMode(13, OUTPUT); 
  pinMode(pirSensor, INPUT); 
  Serial.begin(9600);
}

void loop() {
   int val = digitalRead(pirSensor); 
  if (val == HIGH) { 
    digitalWrite(13, HIGH); 
    Serial.println("Motion detected!");
  }
  else { 
    digitalWrite(13, LOW); 
    Serial.println("No motion detected.");
  }
  delay(500); 
}




