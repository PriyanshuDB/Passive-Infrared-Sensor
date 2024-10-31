const int pirPin = 3;       // PIR sensor pin
const int ledPin = 13;      // LED pin
bool motionDetected = false; // Track motion state

void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.println("Calibrating sensor...");
  delay(30000);             // Calibration time
  Serial.println("Sensor ready");
}

void loop() {
  if (digitalRead(pirPin) == HIGH) {
    if (!motionDetected) {  // Detect only new instances of motion
      motionDetected = true;
      digitalWrite(ledPin, HIGH);   // Turn on LED
      Serial.print("Motion detected at ");
      Serial.print(millis() / 1000); // Display time in seconds
      Serial.println(" sec");
    }
  } else {
    if (motionDetected) {   // Detect end of motion
      motionDetected = false;
      digitalWrite(ledPin, LOW);    // Turn off LED
      Serial.print("Motion ended at ");
      Serial.print(millis() / 1000); // Display time in seconds
      Serial.println(" sec");
    }
  }
}
