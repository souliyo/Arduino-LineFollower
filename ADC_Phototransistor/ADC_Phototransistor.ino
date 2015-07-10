
//start with specify pin and value. This is a good practice to do.
//When we want to change the pin, can just change it from the up here

int photoTrans = 1;  // we are using pin A1
int photoVal = 0;    // we initialize the value of integer to 0

void setup() {
  
  Serial.begin(9600); //seting up the serial

}

void loop() {
  String titlePhotoTrans = "PhotoTransistor Read: "; // to make the reading easy to read
  photoVal = analogRead(photoTrans); // read the analog pin, and store value in to intVal 
  Serial.println(titlePhotoTrans + photoVal); //debug value so we can see in realtime. 

}
