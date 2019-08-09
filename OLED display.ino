#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display = Adafruit_SSD1306();

void setup()
{
  Serial.begin(115200);// For nodemcu
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
}
void loop()
{
  display.clearDisplay();
  display.setCursor(2, 5);
  display.print("TECH GUIDE");
  display.display();
  delay(10000);
  
  display.clearDisplay();
  display.setCursor(3, 10);
  display.print("   E N D  ");
  display.display();

  delay(200000);
  
}
