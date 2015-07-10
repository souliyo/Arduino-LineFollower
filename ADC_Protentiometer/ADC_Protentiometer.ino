
//start with specify pin and value. This is a good practice to do.
//When we want to change the pin, can just change it from the up here

int photoResistor = 2;  // we are using pin A1
int photoResisVal = 0;    // we initialize the value of integer to 0

void setup() {
  
  Serial.begin(9600); //seting up the serial

}

void loop() {
  String titlePhotoResistor = "PhotoResistor Read: "; // to make the reading easy to read
  photoResisVal = analogRead(photoResistor); // read the analog pin, and store value in to intVal 
  Serial.println(titlePhotoResistor + photoResisVal); //debug value so we can see in realtime. 

}
