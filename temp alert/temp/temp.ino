#include <LiquidCrystal.h>
int seconds = 0;
int motorPin = 9;
const int temperature = A0; //A0 is the analog pin  
int ledR=6;
int ledG=7;
int buzz=8;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16, 2);
  Serial.begin(9600);  
  pinMode(motorPin,OUTPUT);
  pinMode(temperature,INPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(buzz, OUTPUT);
}

void loop()
{
  lcd.clear();
  int Temp = analogRead(temperature);  
  float volts = (Temp / 965.0) * 5;  
  float celcius = (volts - 0.5) * 100;  
  celcius=celcius+40;
  float fahrenheit = (celcius * 9 / 5 + 32);  
  Serial.println(fahrenheit);
  Serial.println(celcius);
  lcd.setCursor(0, 0);
  lcd.print("temp:-");
  lcd.setCursor(7, 0);  
  lcd.print(celcius);  
  if(celcius>=25.00){
    digitalWrite(ledR,HIGH);
    digitalWrite(buzz,HIGH);
    digitalWrite(ledG,LOW);
    digitalWrite(motorPin, HIGH);
  }else{
    digitalWrite(ledR,LOW);
    digitalWrite(buzz,LOW);
     digitalWrite(ledG,HIGH);
    digitalWrite(motorPin, LOW);
  }
 
  delay(2000);  
 
  
}