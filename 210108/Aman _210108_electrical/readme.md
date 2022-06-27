# ques3
# Tinkercad link
https://www.tinkercad.com/things/aVqFERFyCN3-force-sensor-and-display-in-lcd
 # Code
#include "LiquidCrystal.h"
LiquidCrystal lcd(8,7,6,5,4,3);

int Force_VAL = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  
  lcd.setCursor(0,0);
  lcd.print("Force Sensor project");

  pinMode(11, OUTPUT);

 
}

void loop()
{
  Force_VAL = analogRead(A0);
  Serial.println(Force_VAL);
  
  lcd.setCursor(0,1);
  lcd.print(Force_VAL);

 if (Force_VAL > 400)
 {
    digitalWrite(11, HIGH);
   lcd.setCursor(5,1);
   lcd.print(" Led on   ");
  } 
else
 {
    digitalWrite(11, LOW);
    lcd.setCursor(5,1);
    lcd.print("  Led off  ');
  }
  
  delay(10);

[image]("./Screenshot (271).png")