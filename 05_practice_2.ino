int led = 7;  // led is connected to pin 7 

void setup() {
  pinMode(led, OUTPUT);  // assign pin as an output 
}

void loop() {
  // the led will be on for 1 second 
  digitalWrite(led, HIGH);
  delay(1000);

  // led will flash 5 times 
  for (int i = 0; i < 5; i++) {
    digitalWrite(led, LOW);   
    delay(100);               
    digitalWrite(led, HIGH);  
    delay(100);               
  }

  digitalWrite(led, LOW);
  while (1) {
  }
}
