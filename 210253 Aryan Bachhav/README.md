<img width="749" alt="Screenshot 2022-06-27 at 10 25 34 PM" src="https://user-images.githubusercontent.com/107427258/176012595-8be2030d-d749-4e42-80b7-2c2a94fdd938.png">
<img width="764" alt="Screenshot 2022-06-27 at 10 42 40 PM" src="https://user-images.githubusercontent.com/107427258/176012654-ca8c32ce-1d28-4cd3-9cd7-2b6231644605.png">
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define sensorPin A0

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temperature:");
}

void loop() {
  lcd.setCursor(0, 1);  
  
  int reading = analogRead(sensorPin);
  float voltage = reading * (5000 / 1024.0);
  float temperature = (voltage - 500) / 10;
  
  lcd.print(temperature);
  
}
 
