void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(A0) == HIGH) {
    Serial.println("Active");
  }
  else {
    Serial.println("Inactive");
  }
  delay(1000);
}
