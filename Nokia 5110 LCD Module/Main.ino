#include <PCD8544.h>
static const byte glyph[] = { B00010000, B00110100, B00110000, B00110100, B00010000 };

static PCD8544 lcd;

void setup() {

  lcd.begin(84, 48);
  lcd.createChar(0, glyph);
}

void loop() {

  lcd.setCursor(0, 0);
  lcd.print("Hello World");
   lcd.setCursor(0, 1);
   lcd.print(":)");
}
