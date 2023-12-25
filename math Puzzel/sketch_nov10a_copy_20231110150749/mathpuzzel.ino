int r1=2;
int g1=3;
int r2=4;
int g2=5;

int r3=6;
int g3=7;
int r4=A1;
int g4=A2;

int b11=8;
int b12=9;

int b21=10;
int b22=11;

int b31=12;
int b32=13;

int b41=A1;
int b42=A2;

void setup(){
  Serial.begin(9600);
  pinMode(r1,OUTPUT);
  pinMode(g1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(g2,OUTPUT);
   pinMode(r3,OUTPUT);
  pinMode(g3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(g4,OUTPUT);
  pinMode(b11,INPUT_PULLUP);
  pinMode(b12,INPUT_PULLUP);
  pinMode(b21,INPUT_PULLUP);
  pinMode(b22,INPUT_PULLUP);
  pinMode(b31,INPUT_PULLUP);
  pinMode(b32,INPUT_PULLUP);
  pinMode(b41,INPUT_PULLUP);
  pinMode(b42,INPUT_PULLUP);
  digitalWrite(g1,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(g4,LOW);
  
}
void loop(){
  
  if(!digitalRead(b11)&&!digitalRead(b32)){
   digitalWrite(g1,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(g4,LOW);
    Serial.println("first led");
  }else if(!digitalRead(b11)&&!digitalRead(b12)){
    digitalWrite(r1,HIGH);
    digitalWrite(g1,LOW);
  
  digitalWrite(r2,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(g4,LOW);
  }else if(!digitalRead(b11)&&!digitalRead(b32)){

digitalWrite(r1,HIGH);
    digitalWrite(g1,LOW);
  
  digitalWrite(r2,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(g4,LOW);
  }else if(!digitalRead(b11)&&!digitalRead(b42)){
digitalWrite(r1,HIGH);
    digitalWrite(g1,LOW);
  
  digitalWrite(r2,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(g4,LOW);
  }
  
  
  
  else if(!digitalRead(b21)&&!digitalRead(b12)){
   digitalWrite(g2,HIGH);
   digitalWrite(g1,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  
  digitalWrite(g3,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(g4,LOW);
    Serial.println("first led");
  }else if((!digitalRead(b21)&&!digitalRead(b42))||(!digitalRead(b21)&&!digitalRead(b32))||(!digitalRead(b21)&&!digitalRead(b22))){
    digitalWrite(r2,HIGH);
    digitalWrite(g1,LOW);
  digitalWrite(r1,LOW);
  
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(g4,LOW);
  }
  else if(!digitalRead(b31)&&!digitalRead(b22)){
   digitalWrite(g3,HIGH);
   digitalWrite(g1,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(g2,LOW);

  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(g4,LOW);
    Serial.println("first led");
  
  }else if((!digitalRead(b31)&&!digitalRead(b42))||(!digitalRead(b31)&&!digitalRead(b32))||(!digitalRead(b31)&&!digitalRead(b12))){
    digitalWrite(r3,HIGH);
    digitalWrite(g1,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  
  digitalWrite(r4,LOW);
  digitalWrite(g4,LOW);
  }else{
      digitalWrite(g1,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(g4,LOW);
  }
  
  
}