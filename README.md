## RADHIMA SONG FULL ANIMATION ESP32 + SSD1306 OLED

This project displays a **214-frame bitmap animation** on a 128×64 SSD1306 OLED using an ESP32.

The animation uses a frame delay of **100 ms**, giving a nominal playback rate of approximately **10 frames per second**. One complete animation cycle takes approximately **21.4 seconds**.

## FILES

- `RadhimaESP32Full.ino` — Arduino sketch
- `animation.h` — cleaned animation data containing 214 frames

## SETUP

1. Keep both files in the same `RadhimaESP32Full` folder.
2. In Arduino IDE, install **Adafruit SSD1306** and **Adafruit GFX Library** using:
   **Sketch → Include Library → Manage Libraries**
3. Connect the OLED to the ESP32:

   | OLED | ESP32 |
   |---|---|
   | VCC | 3V3 |
   | GND | GND |
   | SDA | GPIO 32 |
   | SCL | GPIO 33 |

4. Open `RadhimaESP32Full.ino` in Arduino IDE.
5. Select your ESP32 board under:
   **Tools → Board**
6. Select the correct COM port under:
   **Tools → Port**
7. Click **Upload**.

If the upload fails to connect, hold the **ESP32 BOOT button** when the IDE shows `Connecting...` and release it once uploading begins.

## OLED I2C ADDRESS

The sketch assumes that the OLED uses I2C address:

```cpp
#define OLED_ADDRESS 0x3C
```

If your OLED uses address `0x3D`, change it to:

```cpp
#define OLED_ADDRESS 0x3D
```

## OLED PIN CONFIGURATION

The sketch uses:

```cpp
#define OLED_SDA 32
#define OLED_SCL 33
```

If you connect the OLED to different GPIO pins, change these two definitions in the Arduino sketch.

## ANIMATION SPECIFICATIONS

| Parameter | Value |
|---|---:|
| Original frames | 222 |
| Removed frames | 8 |
| Final frames | 214 |
| Resolution | 128 × 64 |
| Frame delay | 100 ms |
| Nominal frame rate | ~10 FPS |
| Cycle duration | ~21.4 seconds |
| OLED controller | SSD1306 |
| I2C address | 0x3C |

## HOW IT WORKS

The ESP32 initializes the SSD1306 OLED using I2C and sequentially displays the bitmap frames stored in `animation.h`.

Each frame is drawn on the OLED and displayed for approximately 100 ms before the next frame is loaded.

After the final frame, the animation starts again from the beginning.

## PROJECT STRUCTURE

```text
RadhimaESP32Full/
├── RadhimaESP32Full.ino
├── animation.h
└── README.md
```

## AUTHOR

**HEMANTHAKUMAR**
