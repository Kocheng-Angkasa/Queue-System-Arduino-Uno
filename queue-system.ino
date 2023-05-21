#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int PenghitungUrutan = 0;
int Urutan1 = 0;
int Urutan2 = 0;
int Urutan3 = 0;
int Bilik1 = 0;
int Bilik2 = 0;
int Bilik3 = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Blk1  Blk2  Blk3");
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
}

void loop() {
  Bilik1 = digitalRead(10);
  Bilik2 = digitalRead(9);
  Bilik3 = digitalRead(8);
  
  if(Bilik1 == HIGH) {
    PenghitungUrutan++;
    Urutan1 = PenghitungUrutan;
  }
  
  if(Bilik2 == HIGH) {
    PenghitungUrutan++;
    Urutan2 = PenghitungUrutan;
  }
  
  if(Bilik3 == HIGH) {
    PenghitungUrutan++;
    Urutan3 = PenghitungUrutan;
  }

  lcd.setCursor(1, 2);
  lcd.print(Urutan1);
  lcd.setCursor(7, 2);
  lcd.print(Urutan2);
  lcd.setCursor(13, 2);
  lcd.print(Urutan3);
  delay(100);

}
 
