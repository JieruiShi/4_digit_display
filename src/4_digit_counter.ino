#include "util.h"

int digits[4] = {0,0,0,0}; 
bool Dots[4] = {0,0,0,1};
int displayValue = 0;
int counter;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);

}

void loop() {
  step();
  counter++;
  if (counter % 1 == 0){
    displayValue ++;
  }
}

void step(){
  changeDigits(displayValue);
  displayDigits(digits, Dots);
}

void changeDigits(int num){
  //input a positive number from 0 - 9999, to change digits array to be passed into the displayDigits function
  for (int n = 0; n < 4; n++){
    digits[3 - n] = num % 10;
    num /= 10;
  }
  
}
  
  
  

  
