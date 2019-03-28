#define trigPinLeft 26
#define echoPinLeft 27 
#define trigPinRight 28
#define echoPinRight 29 
#define trigPinFront 30
#define echoPinFront 31 

//MOTOR pins
#define ENA 11 //LEFT motor
#define ENB 12 //RIGHT motor
#define IN1 22
#define IN2 23
#define IN3 24
#define IN4 25


void setup() {
  Serial.begin(9600);
  pinMode(trigPinLeft,OUTPUT);
  pinMode(trigPinRight,OUTPUT);
  pinMode(trigPinFront,OUTPUT);
  pinMode(echoPinLeft,INPUT);
  pinMode(echoPinRight,INPUT);
  pinMode(echoPinFront,INPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  analogWrite(ENA,0);
  analogWrite(ENB,0);

}

void goFront(int speed){
    analogWrite(ENA,speed);
    analogWrite(ENB,speed);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
}

void goBack(int speed){
    analogWrite(ENA,speed);
    analogWrite(ENB,speed);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
}

void STOP(){
    analogWrite(ENA,0);
    analogWrite(ENB,0);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
}


void goFrontLeft(int speed){
    analogWrite(ENA,0);
    analogWrite(ENB,speed);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
}
void goFrontRight(int speed){
    analogWrite(ENA,speed);
    analogWrite(ENB,0);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
}
void loop() {
  goFront(200);

}
