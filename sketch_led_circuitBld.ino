int redLED = 9;
int onTime = 500;
int offTime = 1000; // plus name vars something useful
void setup() { 
  // this is setting the pin Moodes
  pinMode ( redLED,OUTPUT);
}
void loop() {
  digitalWrite(redLED,HIGH);
  delay(onTime);
  digitalWrite(redLED,LOW);
  delay(offTime);
}
