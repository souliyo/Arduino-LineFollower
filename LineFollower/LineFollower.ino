//photoResistor
int protentiometer = 2;  // we are using pin A2
int protentiometerVal = 0;    // we initialize the value of integer to 0

//photo transistor
int photoTrans = 1;  // we are using pin A1
int photoVal = 0;    // we initialize the value of integer to 0

//Motors
int motorRight = 9;
int motorLeft = 10;


void setup() {
  Serial.begin(9600); //seting up the serial
  // put your setup code here, to run once:
  
  //set up as the output pins
  pinMode(motorRight, OUTPUT); 
  pinMode(motorLeft, OUTPUT); 

}

void loop() {
  String titleProtentiometer = "Protentiometer  Read: "; // to make the reading easy to read
  protentiometerVal = analogRead(protentiometer); // read the analog pin, and store value in to intVal 
  Serial.println(titleProtentiometer + protentiometerVal); //debug value so we can see in realtime. 

  String titlePhotoTrans = "PhotoTransistor Read: "; // to make the reading easy to read
  photoVal = analogRead(photoTrans); // read the analog pin, and store value in to intVal 
  Serial.println(titlePhotoTrans + photoVal); //debug value so we can see in realtime. 
  //delay(200);
 
 if(photoVal < protentiometerVal){
    Serial.println("motor Right \n"); 
    motorRightON();
 }else if(photoVal > protentiometerVal){
    Serial.println("motor Left \n"); 
    motorLeftON();
 }else{
    
    }
SOULIYO5
}

//Methods to runt the motor
void motorRightON(){
  digitalWrite(motorRight, HIGH);
  digitalWrite(motorLeft, LOW);
}
void motorLeftON(){
  digitalWrite(motorRight, LOW);
  digitalWrite(motorLeft, HIGH);
}
