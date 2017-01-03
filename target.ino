
const int ledPin1 = 10; 
const int ledPin2 = 11;
const int ledPin3 = 12;
const int ledPin4 = 9;
const int knockSensor = A0; // the piezo is connected to analog pin 0
const int threshold = 100;  // threshold value to decide when the detected impact was a shot



int sensorReading = 0;      // variable to store the value read from the sensor pin
int ledState = HIGH;         // variable used to store the last LED status, to toggle the light

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  Serial.begin(9600); 
  Serial.println("WORKING!");
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  
}

void loop() {
  // read the sensor and store it in the variable sensorReading:
  sensorReading = analogRead(knockSensor);

  // if the sensor reading is greater than the threshold:
  if (sensorReading >= threshold) {
    // toggle the status of the ledPin:
 
    
    // update the LED pin itself:
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
 
  }
  delay(20);  // delay to avoid overloading the serial port buffer
}
