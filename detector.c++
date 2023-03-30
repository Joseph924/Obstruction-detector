// Define pins
const int ldrPin = A0;   // LDR connected to analog input A0
const int ledPin = 13;   // LED connected to digital pin 13

// Define threshold values
const int thresholdLow = 500;   // Low threshold value
const int thresholdHigh = 800;  // High threshold value

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
  Serial.begin(9600);       // Initialize serial communication at 9600 baud rate
}

void loop() {
  int ldrValue = analogRead(ldrPin);  // Read the LDR value from the analog pin
  Serial.println(ldrValue);           // Print the LDR value to serial monitor for debugging purposes
  
  if (ldrValue < thresholdLow) {      // If the LDR value is below the low threshold, obstacle detected
    digitalWrite(ledPin, HIGH);       // Turn on the LED
    Serial.println("Obstacle detected!");
  }
  else if (ldrValue > thresholdHigh) {  // If the LDR value is above the high threshold, no obstacle detected
    digitalWrite(ledPin, LOW);          // Turn off the LED
  }
  // If the LDR value is between the low and high thresholds, do nothing
  delay(100);  // Wait for 100ms before checking again
}
