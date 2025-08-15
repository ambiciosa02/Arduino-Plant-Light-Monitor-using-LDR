int ldrPin = A0;
int lightValue;
int threshold = 300; // Adjust depending on ambient conditions

void setup() {
  Serial.begin(9600);
  pinMode(ldrPin, INPUT);
}

void loop() {
  lightValue = analogRead(ldrPin);
  Serial.print("Light level: ");
  Serial.println(lightValue);

  if (lightValue < threshold) {
    Serial.println("⚠️ Not enough light for the plant!");
    // You can also trigger a lamp or send notification here
  }

  delay(3000);
}
