#define SOIL_MOISTURE_PIN 34  

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  int moisture = analogRead(SOIL_MOISTURE_PIN);
  Serial.print("Soil Moisture Raw Value: ");
  Serial.println(moisture);
  delay(1000);
}

