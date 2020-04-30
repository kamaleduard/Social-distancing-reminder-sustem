
#define trigPin 5
#define echoPin 3

#define trigPin1 10
#define echoPin1 9

#define led 12
void setup()
{ Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(led, OUTPUT);
}
void loop()
{
  long distance, duration;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;
  Serial.println(distance);
  //----------------------------------------
  long distance1, duration1;
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);

  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1 / 2) / 29.1;
  Serial.print("dis 1");
  Serial.println(distance1);
  //----------------------------------------




  if (distance > 50)
  {
    digitalWrite(led, LOW);
Serial.println("LOW one");
  }
  else
  {
    digitalWrite(led, HIGH);
    Serial.println("HIGH one");
  }

  if (distance1 > 50)
  {
    digitalWrite(led, LOW);
    Serial.println("LOW two");
  }
  else
  {
    digitalWrite(led, HIGH);
    Serial.println("HIGH two");
  }

}
