#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 32     // OLED display height, in pixels
#define OLED_RESET -1        // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C  ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define catch 27
#define malch_read 26
#define malch_S1 16
#define malch_S2 17
#define malch_S3 18
#define malch_S4 19

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ;  // Don't proceed, loop forever
  }
  //pinMode(,INPUT);
  //pinMode(,OUTPUT);
  pinMode(2, OUTPUT);   //1逆転
  pinMode(3, OUTPUT);   //0左前
  pinMode(10, OUTPUT);  //1正転
  pinMode(11, OUTPUT);  //0右前
  pinMode(12, OUTPUT);  //1正転
  pinMode(13, OUTPUT);  //0右下
  pinMode(6, OUTPUT);   //1逆転
  pinMode(7, OUTPUT);   //0左下
  pinMode(catch, INPUT);
  pinMode(malch_read, INPUT);
  pinMode(malch_S1, OUTPUT);
  pinMode(malch_S2, OUTPUT);
  pinMode(malch_S3, OUTPUT);
  pinMode(malch_S4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(malch(3));
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println(malch(1));
  display.println(malch(2));
  display.println(malch(3));
  display.println(malch(4));
  display.display();
}
