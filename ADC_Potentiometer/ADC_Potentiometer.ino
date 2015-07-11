
//start with specify pin and value. This is a good practice to do.
//When we want to change the pin, can just change it from the up here

int potentiometer = 2;  // we are using pin A2
int potentiometerVal = 0;    // we initialize the value of integer to 0

void setup() {
  
  Serial.begin(9600); //seting up the serial

}

void loop() {
  String titlepotentiometer = "Potentiometer Read: "; // to make the reading easy to read
  potentiometerVal = analogRead(potentiometer); // read the analog pin, and store value in to intVal 
  Serial.println(titlepotentiometer + potentiometerVal); //debug value so we can see in realtime. 

}
