# 4_digit_display

5641AS is a Common Cathode 4-digit LED 7-Segment Display

This library provides a single function to display it.

## Initialization

##### Wiring

![4-digit-7-segment-LED-display-pinout](4-digit-7-segment-LED-display-pinout.png)

(Image from https://osoyoo.com/2017/08/08/arduino-lesson-4-digit-7-segment-led-display/)

Connect pins A-G, and decimal pin directly to Arduino pins as specified in numbers.h, connect a current limiting resistor between pins D1 - D4 and the Arduino pins. According to the datasheet, the ideal resistor is 330 ohms but it worked for mine using the 1kΩ resistors. If you have a different 4 digit 7 segment display, best to check the datasheet for the working voltage of the LEDs. 

##### Code

In numbers.h you may change the twelve pin numbers corresponding to the twelve digital pins on the Arduino. In my case pin 2 - 13 is used. Pin 0 and 1 should not be used. A0 - A5 can be used.



## Usage

function prototype

```c++
void displayDigits(int displayedDigits[4], bool dots[4]);//input array of 4 digits to show and array of 4 boolean to control dot display
```



## Example

```
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
  if (counter % 10 == 0){
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
```

The example shows a 4 digit counter, the counter increments by 1 per 80 milliseconds.

The four digits cannot actually show different digits simultaneously, by turning each digit on and off in turn rapidly make it seems as if four different digits were shown. Therefore the `displayDigits()` must always be called per loop. Each `displayDigits()` call lasts for 8 milliseconds, and you can modify the function in util.h to make it last longer or shorter.