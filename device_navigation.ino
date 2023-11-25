const int trigPin = 9;
const int echoPin = 8;
const int buzzer = 12;
const int motor = 13;
long duration, distance;           
void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(buzzer, OUTPUT);
  pinMode(motor, OUTPUT);
  

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
 
  distance= duration*0.034/2;
 digitalWrite(in1,HIGH);
 digitalWrite(in3,HIGH);
 digitalWrite(in2,LOW);
 digitalWrite(in4,LOW);
  if (distance <= 21){
  digitalWrite(buzzer, HIGH);
  digitalWrite(motor, HIGH);
  
  }

  else{
  digitalWrite(buzzer, LOW);
  digitalWrite(motor, LOW);    
  
  }
}
