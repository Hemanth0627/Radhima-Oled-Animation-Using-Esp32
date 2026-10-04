RADHIMA FULL ANIMATION ? ESP32 + SSD1306 OLED

This project uses all 222 frames from the original animation.h. The header's
frame delays are 100 ms each, so the animation runs at about 10 frames per
second and one complete cycle takes 22.2 seconds.

FILES
- RadhimaESP32Full.ino: Arduino sketch
- animation.h: original full 222-frame animation data

SETUP
1. Keep both files in the RadhimaESP32Full folder.
2. In Arduino IDE, install Adafruit SSD1306 and Adafruit GFX using
   Sketch > Include Library > Manage Libraries.
3. Connect the OLED to the ESP32: VCC to 3V3, GND to GND, SDA to GPIO 21,
   and SCL to GPIO 22. If your wiring uses other pins, edit OLED_SDA and
   OLED_SCL near the top of the sketch.
4. Open RadhimaESP32Full.ino.
5. Select your exact ESP32 board under Tools > Board and its port under
   Tools > Port. Select the correct board model if you know it.
6. Click Upload. If upload fails to connect, hold the ESP32 BOOT button
   when the IDE says Connecting, then release it once uploading begins.

The sketch assumes the OLED I2C address is 0x3C. If your previous working
OLED setup used 0x3D, change OLED_ADDRESS in the sketch to 0x3D.
