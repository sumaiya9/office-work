
int redLed = 12   ;
int greenLed = 11;
int buzzer = 13;
int relay = 10;
int smokeA0 = A0;
// Your threshold value
int sensorThres = 140;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(relay, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(relay, HIGH);
    digitalWrite(greenLed, LOW);
    tone(buzzer, 3000, 300);
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(relay, LOW);
    digitalWrite(greenLed, HIGH);
    noTone(buzzer);
  }
  delay(100);
}
