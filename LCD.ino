#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27, 16, 2); 
int taster1 = 8;
int taster2 = 9;
int taster3 = 10;
int tasterstatus1 = 0;
int tasterstatus2 = 14;
int tasterstatus3 = 15;


void setup() 
{
lcd.init(); 
lcd.backlight(); 
pinMode(taster1, INPUT);
pinMode(taster2, INPUT);
pinMode(taster3, INPUT);
}

void loop() {
  tasterstatus1=digitalRead(taster1);
  if (tasterstatus1 == HIGH)
{
lcd.setCursor(0, 0); 
lcd.print("tuna"); 
delay(3000);
} 
else

{
  lcd.clear();
  }



    tasterstatus2=digitalRead(taster2);
  if (tasterstatus2 == HIGH)
{

lcd.setCursor(0, 0); 
lcd.print("toker"); 
delay(3000);
} 

else

{
  lcd.clear();
  }



    tasterstatus3=digitalRead(taster3);
  if (tasterstatus3 == HIGH)
{

lcd.setCursor(0, 0); 
lcd.print("11HBFI"); 
delay(3000);
} 

else

{
  lcd.clear();
  }
}
