const int trigPin = 9;
const int echoPin = 8;
const int buzzer = 12;
const int motor = 13;
int in1=7;
int in2=6;
int in3=4;
int in4=3;
                            
long duration, distance;           
void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(buzzer, OUTPUT);
  pinMode(motor, OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
}

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
  digitalWrite(in1,HIGH);
  digitalWrite(in4,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  delay(2001);
  digitalWrite(in1,HIGH);
  }

  else{
  digitalWrite(buzzer, LOW);
  digitalWrite(motor, LOW);    
  digitalWrite(in1,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in4,LOW);
  delay(701);
  }
}
