/*
    Project name : ESP8266 Photo interruptor sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-photo-interruptor-sensor
*/

const int photoInterrupterPin = D1; // Digital pin connected to the photo interrupter sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(photoInterrupterPin, INPUT); // Set the sensor pin as input
}

void loop() {
  int sensorState = digitalRead(photoInterrupterPin); // Read the sensor state

  // Check if the sensor is interrupted
  if (sensorState == LOW) {
    Serial.println("Object detected!");
  } else {
    Serial.println("No object detected.");
  }

  delay(500); // Wait for 500 milliseconds before taking another reading
}
