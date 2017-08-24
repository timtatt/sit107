int ledPin = 13;
int soilPin = A0;

int moistureLevel = 0;

int moistureCalibration = 111;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(soilPin, INPUT);
  
  Serial.begin(9600);
}
void loop() {
  moistureLevel = analogRead(soilPin);
  if (moistureLevel <= moistureCalibration) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(1000);
}
