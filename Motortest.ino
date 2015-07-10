
int motorRight = 9;
int motorLeft = 10;
void setup() {
  // put your setup code here, to run once:
pinMode(motorRight, OUTPUT); 
pinMode(motorLeft, OUTPUT); 
}

void loop() {
  
  motorRightON();
  delay(200);
  motorLeftON();
  delay(200);

}

void motorRightON(){
  digitalWrite(motorRight, HIGH);
  digitalWrite(motorLeft, LOW);
}
void motorLeftON(){
  digitalWrite(motorRight, LOW);
  digitalWrite(motorLeft, HIGH);
}
