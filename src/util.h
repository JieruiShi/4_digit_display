#include "numbers.h"

int digitArray[4] = {D1,D2,D3,D4};
bool defaultDots[4] = {0,0,0,0};

void enableDigits(bool controlDigitArray[4]){
  for (int n = 0; n < 4; n++){
    if (controlDigitArray[n]){
      digitalWrite(digitArray[n],LOW);
    }
    else {
      digitalWrite(digitArray[n],HIGH);
    }
  }
}

void enableDigits(int digitNo){
  for (int n = 0; n < 4; n++){
    if (n == digitNo){
      digitalWrite(digitArray[n],LOW);
    }
    else {
      digitalWrite(digitArray[n],HIGH);
    }
  }
}

void displayDigits(int displayedDigits[4],bool dots[4]){
  for (int n = 0; n < 4; n++){
    enableDigits(n);            
    switch (displayedDigits[n]){
      case 0:
        zero();
        break;
      case 1:
        one();
        break;
      case 2:
        two();
        break;
      case 3:
        three();
        break;
      case 4:
        four();
        break;
      case 5:
        five();
        break;
      case 6:
        six();
        break;
      case 7:
        seven();
        break;
      case 8:
        eight();
        break;
      case 9:
        nine();
        break;
      case -1:
        off();
        break;
    }

    if (dots[n]){
      digitalWrite(DP,HIGH);
    }
    else {
      digitalWrite(DP,LOW);
    }

    delay(1);
    off();
    delay(1);
  }

}

void leftToRightDisplayDigits(int ltrDigits[4], bool dots[4] = defaultDots){
  int reversedDigits[4];
  bool reversedDots[4];
  for (int n = 0; n < 4; n++){
    reversedDigits[n] = ltrDigits[3 - n];
    reversedDots[n] = dots[3 - n];
  }
  displayDigits(reversedDigits,reversedDots);
}
