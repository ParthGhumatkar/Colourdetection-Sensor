int SenSorOutPut= 3;
unsigned int frequency = 0;

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); 


void setup()

{

                
  lcd.init();                    
  lcd.init();
  lcd.backlight();
 pinMode(7, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(3, INPUT);
 digitalWrite(7,HIGH);
 digitalWrite(6,LOW);

}

void loop()

{
 // Red detection part
 lcd.print("Red=");
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 frequency = pulseIn(SenSorOutPut, LOW);
 lcd.print(frequency);
 lcd.print(" ");
 lcd.setCursor(6, 0);
  delay(500);

               
 // Blue detection part
 lcd.print("Blue=");
 digitalWrite(8,LOW);
 digitalWrite(9,HIGH);
 frequency = pulseIn(SenSorOutPut, LOW);
 lcd.print(frequency);
 lcd.print(" ");
 lcd.setCursor(0, 1);
  delay(500);             

              
 // Green detection part
 lcd.print("Green=");
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 frequency = pulseIn(SenSorOutPut, LOW);
 lcd.print(frequency);
 lcd.print(" ");
 lcd.setCursor(0, 0);
  delay(500);        

}     
