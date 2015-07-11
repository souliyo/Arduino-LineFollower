//photoResistor
int potentiometer = 2;  // we are using pin A2
int potentiometerVal = 0;    // we initialize the value of integer to 0

//photo transistor
int photoTrans = 1;  // we are using pin A1
int photoVal = 0;    // we initialize the value of integer to 0



void setup() {
  Serial.begin(9600); //seting up the serial
  // put your setup code here, to run once:

}

void loop() {
  String titlepotentiometer = "potentiometer  Read: "; // to make the reading easy to read
  potentiometerVal = analogRead(potentiometer); // read the analog pin, and store value in to intVal 
  Serial.println(titlepotentiometer + potentiometerVal); //debug value so we can see in realtime. 

  String titlePhotoTrans = "PhotoTransistor Read: "; // to make the reading easy to read
  photoVal = analogRead(photoTrans); // read the analog pin, and store value in to intVal 
  Serial.println(titlePhotoTrans + photoVal); //debug value so we can see in realtime. 

 
 if(photoVal < potentiometerVal){
    Serial.println("motor Right \n"); 
    
 }else if(photoVal > potentiometerVal){
    Serial.println("motor Left \n"); 
    
 }else{
    
    }

}

