#include <Servo.h>

int ledPin = 13;
int servoPin = 9;
int soilPin = A0;

int tapOpenDegrees = 90;
int tapClosedDegrees = 0;

int moistureLevel = 0;

int moistureCalibration = 111;

Servo tapServo

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(soilPin, INPUT);
  
  tapServo.attach(servoPin);

  Serial.begin(9600);
}
void loop() {
  moistureLevel = analogRead(soilPin);
  if (moistureLevel <= moistureCalibration) {
    digitalWrite(ledPin, HIGH);
    tapServo.write(tapOpenDegrees);
  } else {
    digitalWrite(ledPin, LOW);
    tapServo.write(tapClosedDegrees);
  }
  delay(1000);
}
