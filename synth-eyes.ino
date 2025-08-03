#include <FastLED.h>

#define DATA_PIN 2
#define NUM_LEDS 128

CRGB leds[NUM_LEDS];

char displayState;

void blankLeds() {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Black;
  }
  FastLED.show();
}

void setLedsToStandard() {
  displayState = 'A';
  // RIGHT                               LEFT
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |      
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    | 89| 90| 91| 92|   |   |           |   |   | 35| 36| 37| 38|   
  // 103|102|101|100| 99|   | 97|           | 30|   | 28| 27| 26| 25| 24 
  // 104|105|106|107|108|   |110|           | 17|   | 19| 20| 21| 22| 23 
  // 119|118|117|116|115|   |113|112      15| 14|   | 12| 11| 10| 9 | 8
  //    |121|122|123|124|125|126|127      0 | 1 | 2 | 3 | 4 | 5 | 6 |  

  leds[89] = CRGB::White;
  leds[90] = CRGB::White;
  leds[91] = CRGB::White;
  leds[92] = CRGB::White;

  leds[103] = CRGB::White;
  leds[102] = CRGB::White;
  leds[101] = CRGB::White;
  leds[100] = CRGB::White;
  leds[99] = CRGB::White;
  leds[97] = CRGB::White;

  leds[104] = CRGB::White;
  leds[105] = CRGB::White;
  leds[106] = CRGB::White;
  leds[107] = CRGB::White;
  leds[108] = CRGB::White;
  leds[110] = CRGB::White;

  leds[119] = CRGB::White;
  leds[118] = CRGB::White;
  leds[117] = CRGB::White;
  leds[116] = CRGB::White;
  leds[115] = CRGB::White;
  leds[113] = CRGB::White;
  leds[112] = CRGB::White;

  leds[121] = CRGB::White;
  leds[122] = CRGB::White;
  leds[123] = CRGB::White;
  leds[124] = CRGB::White;
  leds[125] = CRGB::White;
  leds[126] = CRGB::White;
  leds[127] = CRGB::White;

  leds[35] = CRGB::White;
  leds[36] = CRGB::White;
  leds[37] = CRGB::White;
  leds[38] = CRGB::White;

  leds[30] = CRGB::White;
  leds[28] = CRGB::White;
  leds[27] = CRGB::White;
  leds[26] = CRGB::White;
  leds[25] = CRGB::White;
  leds[24] = CRGB::White;

  leds[17] = CRGB::White;
  leds[19] = CRGB::White;
  leds[20] = CRGB::White;
  leds[21] = CRGB::White;
  leds[22] = CRGB::White;
  leds[23] = CRGB::White;

  leds[15] = CRGB::White;
  leds[14] = CRGB::White;
  leds[12] = CRGB::White;
  leds[11] = CRGB::White;
  leds[10] = CRGB::White;
  leds[9] = CRGB::White;
  leds[8] = CRGB::White;

  leds[0] = CRGB::White;
  leds[1] = CRGB::White;
  leds[2] = CRGB::White;
  leds[3] = CRGB::White;
  leds[4] = CRGB::White;
  leds[5] = CRGB::White;
  leds[6] = CRGB::White;
  FastLED.show();
}

void setLedsToHeart() {
  // RIGHT                              // LEFT
  //    |   | 69| 68|   | 66| 65|       //    | 62| 61|   | 59| 58|   |   
  //    | 73| 74| 75| 76| 77| 78| 79    //  48| 49| 50| 51| 52| 53| 54|      
  //    | 86| 85| 84| 83| 82| 81| 80    //  47| 46| 45| 44| 43| 42| 41|   
  //    | 89| 90| 91| 92| 93| 94| 95    //  32| 33| 34| 35| 36| 37| 38|   
  //    |   |101|100| 99| 98| 97|       //    | 30| 29| 28| 27| 26|   |    
  //    |   |106|107|108|109|110|       //    | 17| 18| 19| 20| 21|   |    
  //    |   |   |116|115|114|   |       //    |   | 13| 12| 11|   |   |  
  //    |   |   |   |124|   |   |       //    |   |   | 3 |   |   |   |  

  leds[62] = CRGB::White;
  leds[61] = CRGB::White;
  leds[59] = CRGB::White;
  leds[58] = CRGB::White;
  leds[48] = CRGB::White;
  leds[49] = CRGB::White;
  leds[50] = CRGB::White;
  leds[51] = CRGB::White;
  leds[52] = CRGB::White;
  leds[53] = CRGB::White;
  leds[54] = CRGB::White;
  leds[47] = CRGB::White;
  leds[46] = CRGB::White;
  leds[45] = CRGB::White;
  leds[44] = CRGB::White;
  leds[43] = CRGB::White;
  leds[42] = CRGB::White;
  leds[41] = CRGB::White;
  leds[32] = CRGB::White;
  leds[33] = CRGB::White;
  leds[34] = CRGB::White;
  leds[35] = CRGB::White;
  leds[36] = CRGB::White;
  leds[37] = CRGB::White;
  leds[38] = CRGB::White;
  leds[30] = CRGB::White;
  leds[29] = CRGB::White;
  leds[28] = CRGB::White;
  leds[27] = CRGB::White;
  leds[26] = CRGB::White;
  leds[17] = CRGB::White;
  leds[18] = CRGB::White;
  leds[19] = CRGB::White;
  leds[20] = CRGB::White;
  leds[21] = CRGB::White;
  leds[13] = CRGB::White;
  leds[12] = CRGB::White;
  leds[11] = CRGB::White;
  leds[3] = CRGB::White;

  leds[69] = CRGB::White;
  leds[68] = CRGB::White;
  leds[66] = CRGB::White;
  leds[65] = CRGB::White;
  leds[73] = CRGB::White;
  leds[74] = CRGB::White;
  leds[75] = CRGB::White;
  leds[76] = CRGB::White;
  leds[77] = CRGB::White;
  leds[78] = CRGB::White;
  leds[79] = CRGB::White;
  leds[86] = CRGB::White;
  leds[85] = CRGB::White;
  leds[84] = CRGB::White;
  leds[83] = CRGB::White;
  leds[82] = CRGB::White;
  leds[81] = CRGB::White;
  leds[80] = CRGB::White;
  leds[89] = CRGB::White;
  leds[90] = CRGB::White;
  leds[91] = CRGB::White;
  leds[92] = CRGB::White;
  leds[93] = CRGB::White;
  leds[94] = CRGB::White;
  leds[95] = CRGB::White;
  leds[101] = CRGB::White;
  leds[100] = CRGB::White;
  leds[99] = CRGB::White;
  leds[98] = CRGB::White;
  leds[97] = CRGB::White;
  leds[106] = CRGB::White;
  leds[107] = CRGB::White;
  leds[108] = CRGB::White;
  leds[109] = CRGB::White;
  leds[110] = CRGB::White;
  leds[116] = CRGB::White;
  leds[115] = CRGB::White;
  leds[114] = CRGB::White;
  leds[124] = CRGB::White;
  FastLED.show();
}

void setLedsToBlink() {
    blankLeds();
  // RIGHT                               LEFT
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |      
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |    
  // 104|105|106|107|108|   |110|           | 17|   | 19| 20| 21| 22| 23 
  // 119|118|117|116|115|   |113|112      15| 14|   | 12| 11| 10| 9 | 8
  //    |121|122|123|124|125|126|127      0 | 1 | 2 | 3 | 4 | 5 | 6 |  

  leds[104] = CRGB::White;
  leds[105] = CRGB::White;
  leds[106] = CRGB::White;
  leds[107] = CRGB::White;
  leds[108] = CRGB::White;
  leds[110] = CRGB::White;
  leds[119] = CRGB::White;
  leds[118] = CRGB::White;
  leds[117] = CRGB::White;
  leds[116] = CRGB::White;
  leds[115] = CRGB::White;
  leds[113] = CRGB::White;
  leds[112] = CRGB::White;
  leds[121] = CRGB::White;
  leds[122] = CRGB::White;
  leds[123] = CRGB::White;
  leds[124] = CRGB::White;
  leds[125] = CRGB::White;
  leds[126] = CRGB::White;
  leds[127] = CRGB::White;

  leds[17] = CRGB::White;
  leds[19] = CRGB::White;
  leds[20] = CRGB::White;
  leds[21] = CRGB::White;
  leds[22] = CRGB::White;
  leds[23] = CRGB::White;
  leds[15] = CRGB::White;
  leds[14] = CRGB::White;
  leds[12] = CRGB::White;
  leds[11] = CRGB::White;
  leds[10] = CRGB::White;
  leds[9] = CRGB::White;
  leds[8] = CRGB::White;
  leds[0] = CRGB::White;
  leds[1] = CRGB::White;
  leds[2] = CRGB::White;
  leds[3] = CRGB::White;
  leds[4] = CRGB::White;
  leds[5] = CRGB::White;
  leds[6] = CRGB::White;
  FastLED.show();
  delay(50);
  blankLeds();

  // RIGHT                               LEFT
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |      
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |    
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |    
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |  
  //    |121|122|123|124|125|126|127      0 | 1 | 2 | 3 | 4 | 5 | 6 |  

  leds[121] = CRGB::White;
  leds[122] = CRGB::White;
  leds[123] = CRGB::White;
  leds[124] = CRGB::White;
  leds[125] = CRGB::White;
  leds[126] = CRGB::White;
  leds[127] = CRGB::White;
  
  leds[0] = CRGB::White;
  leds[1] = CRGB::White;
  leds[2] = CRGB::White;
  leds[3] = CRGB::White;
  leds[4] = CRGB::White;
  leds[5] = CRGB::White;
  leds[6] = CRGB::White;
  FastLED.show();
  delay(50);

  blankLeds();
  delay(100);

    // RIGHT                               LEFT
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |      
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |    
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |    
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |  
  //    |121|122|123|124|125|126|127      0 | 1 | 2 | 3 | 4 | 5 | 6 |  

  leds[121] = CRGB::White;
  leds[122] = CRGB::White;
  leds[123] = CRGB::White;
  leds[124] = CRGB::White;
  leds[125] = CRGB::White;
  leds[126] = CRGB::White;
  leds[127] = CRGB::White;
  
  leds[0] = CRGB::White;
  leds[1] = CRGB::White;
  leds[2] = CRGB::White;
  leds[3] = CRGB::White;
  leds[4] = CRGB::White;
  leds[5] = CRGB::White;
  leds[6] = CRGB::White;
  FastLED.show();
  delay(50);

    // RIGHT                               LEFT
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |      
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |   
  //    |   |   |   |   |   |   |           |   |   |   |   |   |   |    
  // 104|105|106|107|108|   |110|           | 17|   | 19| 20| 21| 22| 23 
  // 119|118|117|116|115|   |113|112      15| 14|   | 12| 11| 10| 9 | 8
  //    |121|122|123|124|125|126|127      0 | 1 | 2 | 3 | 4 | 5 | 6 |  

  leds[104] = CRGB::White;
  leds[105] = CRGB::White;
  leds[106] = CRGB::White;
  leds[107] = CRGB::White;
  leds[108] = CRGB::White;
  leds[110] = CRGB::White;
  leds[119] = CRGB::White;
  leds[118] = CRGB::White;
  leds[117] = CRGB::White;
  leds[116] = CRGB::White;
  leds[115] = CRGB::White;
  leds[113] = CRGB::White;
  leds[112] = CRGB::White;
  leds[121] = CRGB::White;
  leds[122] = CRGB::White;
  leds[123] = CRGB::White;
  leds[124] = CRGB::White;
  leds[125] = CRGB::White;
  leds[126] = CRGB::White;
  leds[127] = CRGB::White;

  leds[17] = CRGB::White;
  leds[19] = CRGB::White;
  leds[20] = CRGB::White;
  leds[21] = CRGB::White;
  leds[22] = CRGB::White;
  leds[23] = CRGB::White;
  leds[15] = CRGB::White;
  leds[14] = CRGB::White;
  leds[12] = CRGB::White;
  leds[11] = CRGB::White;
  leds[10] = CRGB::White;
  leds[9] = CRGB::White;
  leds[8] = CRGB::White;
  leds[0] = CRGB::White;
  leds[1] = CRGB::White;
  leds[2] = CRGB::White;
  leds[3] = CRGB::White;
  leds[4] = CRGB::White;
  leds[5] = CRGB::White;
  leds[6] = CRGB::White;
  FastLED.show();
  delay(50);
}

// Arduino Setup
void setup(void) {  
  // Open Serial 
  Serial.begin(115200);

  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);  // GRB ordering is typical
  FastLED.setBrightness(20);

  setLedsToStandard();
}

void loop() {
  int randomBlinkNumber = random(0, 10000);
  Serial.println(randomBlinkNumber);
  if (randomBlinkNumber == 1) {
    Serial.println("Blink");
    setLedsToBlink();
    setLedsToStandard();
  }
}
