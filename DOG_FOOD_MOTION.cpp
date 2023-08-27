#include <Servo.h>
#define trigPin 10
#define echoPin 13
Servo Opener;
int servoPin = 6;
int pirPin = 7;
int val;



void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pirPin, INPUT);
  Opener.attach(servoPin);
  Opener.write(180);
}

void loop() {
  val = digitalRead(pirPin);

  if(val == HIGH) {
    Opener.write(0);
    Serial.print(" val ");
    delay(5000);
  }
  else{
    Opener.write(180);
    Serial.print(" close ");
  }
  float duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) * 0.0344;
}
