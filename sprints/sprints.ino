// Code modified from original Adafruit NeoPixel example

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

#define LED_PIN    6
#define LED_COUNT  3
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
  strip.setBrightness(90);
}

void loop() {
    colorWipe(strip.Color(100, 255, 255), 10); // Cyan
    colorWipe(strip.Color(255, 135, 0), 10); // Orange
    colorWipe(strip.Color(255, 255, 0), 10); // Yellow
    colorWipe(strip.Color(255, 0, 0), 10); // Green
    colorWipe(strip.Color(100, 255, 100), 10); // Blue
    colorWipe(strip.Color(128, 0, 128), 10); // Purple
    colorWipe(strip.Color(139, 99, 108), 10); // Pink
}

void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, color);
    strip.show();
    delay(300);
  }
}
