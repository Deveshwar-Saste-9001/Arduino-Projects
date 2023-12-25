#include <Keypad.h>
#include <Adafruit_LiquidCrystal.h>

#include <Servo.h>

Servo myservo1;
Servo myservo2;
Adafruit_LiquidCrystal lcd(0);
const byte ROW_NUM    = 4; 
const byte COLUMN_NUM = 4; 
int servo1=10;
int servo2=11;
int redled=12;
int greenled=13;
char keys[ROW_NUM][COLUMN_NUM] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte pin_rows[ROW_NUM] = {2, 3, 4, 5}; // connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = {6, 7, 8, 9}; // connect to the column pinouts of the keypad

Keypad keypad = Keypad(makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM);
char password[] = "2356";
String enteredPassword = "";
void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2); 
  lcd.print("Enter password:");
   myservo1.attach(servo1); 
   myservo2.attach(servo2); 
   myservo1.write(0);
   myservo2.write(0);
   digitalWrite(redled,HIGH);
   digitalWrite(greenled,LOW);

}
void loop()
{

  char key = keypad.getKey();
  Serial.println(enteredPassword);
Serial.println(enteredPassword);
  if (key) {
    if (key == '#') {
      // Check the entered password
      if (enteredPassword.equals(password)) {
        lcd.clear();
        lcd.print("Access granted");
        digitalWrite(redled,LOW);
   digitalWrite(greenled,HIGH);
myservo1.write(100);
   myservo2.write(100);
        delay(5000);
        lcd.clear();
        lcd.print("Enter password:");
        digitalWrite(redled,HIGH);
   digitalWrite(greenled,LOW);
        myservo1.write(0);
   myservo2.write(0);
        enteredPassword = "";
      } else {
        lcd.clear();
        lcd.print("Access denied");
        digitalWrite(redled,HIGH);
   digitalWrite(greenled,LOW);
        delay(2000);
        lcd.clear();
        lcd.print("Enter password:");
        enteredPassword = "";
      }
    } else {
      // Append the key to the entered password
      enteredPassword += key;
      lcd.setCursor(enteredPassword.length() - 1, 1);
      lcd.print('*');
    }
  }

}