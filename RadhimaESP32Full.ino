#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "animation.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define OLED_ADDRESS 0x3C

// For a common ESP32 DevKit, SDA=GPIO 21 and SCL=GPIO 22.
// Change these pins if your OLED is wired to different pins.
#define OLED_SDA 32
#define OLED_SCL 33

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Wire.begin(OLED_SDA, OLED_SCL);

  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS)) {
    while (true) {
      delay(100);
    }
  }

  display.clearDisplay();
  display.display();
}

void loop() {
  for (uint16_t i = 0; i < RADHIMA_FRAME_COUNT; ++i) {
    display.clearDisplay();
    display.drawBitmap(
      0, 0,
      Radhima_frames[i],
      RADHIMA_WIDTH, RADHIMA_HEIGHT,
      SSD1306_WHITE
    );
    display.display();
    delay(Radhima_delays[i]);
  }
}
