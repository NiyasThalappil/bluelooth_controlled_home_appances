#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int led1 = 13;
int led2 = 10;
int led3 = 9;
int led4 = 8;
int led5 = 7;
int led6 = 6;
void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  digitalWrite(led1,LOW);
  pinMode(led2,OUTPUT);
  digitalWrite(led2,LOW);
  pinMode(led3,OUTPUT);
  digitalWrite(led3,LOW);
  pinMode(led4,OUTPUT);
  digitalWrite(led4,LOW);
  pinMode(led5,OUTPUT);
  digitalWrite(led5,LOW);
  pinMode(led6,OUTPUT);
  digitalWrite(led6,LOW);

}

void loop() {
if(Serial.available())
{
  String value=Serial.readStringUntil('\n');
  Serial.println(value);
  if(value=="led1on")
  {
    digitalWrite(led1,HIGH);
    lcd.clear();
    lcd.print("LIGHT 1 ON");
    delay(500);
    lcd.clear();
   
  }
  else if(value=="led1off")
  {
    digitalWrite(led1,LOW);
    lcd.clear();
    lcd.print("LIGHT 1 OFF");
    delay(500);
    lcd.clear();
  }
  if(value=="led2on")
  {
    digitalWrite(led2,HIGH);
    lcd.clear();
    lcd.print("LIGHT 2 ON");
    delay(500);
    lcd.clear();
   
  }
  else if(value=="led2off")
  {
    digitalWrite(led2,LOW);
    lcd.clear();
    lcd.print("LIGHT 2 OFF");
    delay(500);
    lcd.clear();
  }
  if(value=="led3on")
  {
    digitalWrite(led3,HIGH);
    lcd.clear();
    lcd.print("LIGHT 3 ON");
    delay(500);
    lcd.clear();
   
  }
  else if(value=="led3off")
  {
    digitalWrite(led3,LOW);
    lcd.clear();
    lcd.print("LIGHT 3 OFF");
    delay(500);
    lcd.clear();
  }
  if(value=="led4on")
  {
    digitalWrite(led4,HIGH);
    lcd.clear();
    lcd.print("LIGHT 4 ON");
    delay(500);
    lcd.clear();
   
  }
  else if(value=="led4off")
  {
    digitalWrite(led4,LOW);
    lcd.clear();
    lcd.print("LIGHT 4 OFF");
    delay(500);
    lcd.clear();
  }
  if(value=="led5on")
  {
    digitalWrite(led5,HIGH);
    lcd.clear();
    lcd.print("LIGHT 5 ON");
    delay(500);
    lcd.clear();
   
  }
  else if(value=="led5off")
  {
    digitalWrite(led5,LOW);
    lcd.clear();
    lcd.print("LIGHT 5 OFF");
    delay(500);
    lcd.clear();
  }
  if(value=="led6on")
  {
    digitalWrite(led6,HIGH);
    lcd.clear();
    lcd.print("LIGHT 6 ON");
    delay(500);
    lcd.clear();
   
  }
  else if(value=="led6off")
  {
    digitalWrite(led6,LOW);
    lcd.clear();
    lcd.print("LIGHT 6 OFF");
    delay(500);
    lcd.clear();
  }
  if(value=="test")
  {
  lcd.clear();
  lcd.print("TESTING");
  digitalWrite(led1, HIGH);
  delay(200);                      
  digitalWrite(led1, LOW);    
  delay(200);
  digitalWrite(led2, HIGH);
  delay(200);                      
  digitalWrite(led2, LOW);    
  delay(200);
  digitalWrite(led3, HIGH);
  delay(200);                      
  digitalWrite(led3, LOW);    
  delay(200);
  digitalWrite(led4, HIGH);
  delay(200);                      
  digitalWrite(led4, LOW);    
  delay(200);
  digitalWrite(led5, HIGH);
  delay(200);                      
  digitalWrite(led5, LOW);    
  delay(200);
  digitalWrite(led6, HIGH);
  delay(200);                      
  digitalWrite(led6, LOW);    
  delay(200);
  lcd.clear();
  lcd.print("COMPLETED");
  delay(500);
  lcd.clear();
  }
  if(value=="masteron")
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    lcd.clear();
    lcd.print("MASTER CONTROL");
    delay(500);
    lcd.clear();
   
  }
  else if(value=="masteroff")
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    lcd.clear();
    lcd.print("MASTER CONTROL");
    delay(500);
    lcd.clear();
  }
     }
}


