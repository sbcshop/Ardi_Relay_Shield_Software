// define digital pins on which relay connected
int relay1 = 4;
int relay2 = 5;
int relay3 = 6;
int relay4 = 7;

void setup() {
  //set relay pins as OUTPUT
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(relay1, HIGH);  // Turn on Relay1
  delay(500);                  // wait 
  digitalWrite(relay2, HIGH);  
   delay(500);
  digitalWrite(relay3, HIGH); 
   delay(500);
  digitalWrite(relay4, HIGH);  
  delay(500);                      
  digitalWrite(relay4, LOW);  // Turn off Relay1
   delay(500);
  digitalWrite(relay3, LOW);  
   delay(500);
  digitalWrite(relay2, LOW);  
   delay(500);
  digitalWrite(relay1, LOW);  
  delay(2000);
  
}
