// RGBW (Red Green Blue White Neo-Pixel starter code
// 16 LEDS with no loop inside of void loop()
// CW Coleman 170413

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

#define NUM_LEDS 16

#define BRIGHTNESS 10

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

// Initialize some variables for the void loop()
int led, red, green, blue, white;
int wait = 50;

void loop() {

  led = 0; red = 255; green = 255; blue = 255; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
  
  led = 1; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
     
  led = 2; red = 8; green = 16; blue = 255; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
  
  led = 3; red = 10; green = 16; blue = 8; white = 255; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
  
  led = 4; red = 255; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

  led = 5; red = 255; green = 16; blue = 255; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
 
  led = 6; red = 25; green = 216; blue = 118; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 7; red = 205; green = 106; blue = 88; white = 110; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 8; red = 155; green = 116; blue = 228; white = 50; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 9; red = 229; green = 216; blue = 118; white = 30; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 10; red = 205; green = 161; blue = 218; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 11; red = 55; green = 196; blue = 158; white = 110; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
   
    led = 12; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
   
    led = 13; red = 55; green = 6; blue = 118; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
   
   led = 14; red = 5; green = 255; blue = 255; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);  
   strip.show();
  
  led = 15; red = 55; green = 16; blue = 208; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
   
   
}


