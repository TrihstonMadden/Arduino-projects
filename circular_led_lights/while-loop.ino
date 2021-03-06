// cw coleman  neo RGBW circular
 #include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6
#define NUM_LEDS 23
#define BRIGHTNESS 15
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);

void setup() {
  Serial.begin(9600);
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  // End of trinket special code
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
    randomSeed(analogRead(0));
}

//set up variables
int red,green,blue,white;
//set first led and total leds
int first = 15;
int leds = 16;
int count = 0;

//The event loop  *************************
void loop() {
  while (count == 0){
    //this sets up the leds for the first time through the loop
      red = 255; green = 255; blue = 25; white = 0;
  }
  
    red = 255;
    if(count % 2 == 0) {red = 0;}
 
  circular(first,leds,red,green,blue,white,count);
  //if (count ==0) delay(3000);
  first = first + 1;
  while (first > (leds -1)) first = 0;//reset first to 0 if it is greater than the number of leds
  count++;
  while (count > 1000) count = 1; //never set count to 0
}

// end of the event loop *************************

//red function
void circular(int s, int lds, int  r,int g,int b,int w, int count){
// s:start   lds:the number of leds  r:red  g:green  b:blue  w:white
int delayVal = 20;// change the delayVal to speed things up
int j;
Serial.println();//debug
for(j = 0; j < 23 ; j++){
    Serial.println (s);//debug
          strip.setPixelColor(s, strip.Color(r,g,b,w ));
          delay(delayVal);
           strip.show();  
            s++; // increase s by 1;
            if (s > (lds -1)) { s = 0;}  
            
 }
  if (count % 2 == 0) {for(j = 0; j < 23 ; j++){
    Serial.println (s);//debug
          strip.setPixelColor(s, strip.Color(r,2,b,w ));
          delay(delayVal);
           strip.show();  
            s--; // increase s by 1;
            if (s < 0) { s = 22;}  
  }   
 }
}


