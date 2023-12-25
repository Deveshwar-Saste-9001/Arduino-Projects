
int trig = 10;
int echo = 9;
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 11;
int led9 = 12;
int led10 = 13;





int i=0;


void setup()
{
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);


}

void loop() {
  
  digitalWrite(trig,LOW);
  delayMicroseconds(5);
 
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
 
 
  digitalWrite(trig,LOW);
 
 
  int a = pulseIn(echo,HIGH);
 
 
 int distance = a*0.034/2;
 Serial.println(distance);
  Serial.println(i);
 if(i<=0){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
 }
 if(i>=1){
   digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);
 }
 
 

  if ( distance<6) //in
  {
  i=i+1;
    delay(500);
  }
   if ( distance>6 && distance<12 && i!=0) //out
  {
  i=i-1;
    delay(500);
  }
 
}
