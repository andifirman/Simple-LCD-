//Andi Firmansyah
//Unikom CodeLabs
//Mengakses LCD 16x2 (16 kolom, 2 baris)


#include <LiquidCrystal.h> //Jangan lupa untuk memasukkan library LCD, bisa di download langsung dari app arduino
LiquidCrystal lcd (9, 8, 5, 4, 3, 2); //Inisialisasi dari pin yang digunakkan (agar lebih jelas, lihat sketch)

void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0, 0);
  lcd.clear();
}

void loop()
{
  lcd.setCursor(0, 0);
  lcd.print("Bismillah Heheh");
  lcd.setCursor(0, 1);
  lcd.print("Unikom CodeLabs");
}

//untuk lebih jelas, hubungi LINE atau IG yang tercantum
