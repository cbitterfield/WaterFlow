/* Water Controller to automatically shutoff water 
 *  if flow exceeds normal limits. 
 *  By Colin Bitterfield
 *  December 2016
 *  Version: 1.0A
 */

#include "config.h"

/*
 * Define Variables
 * 
 * Serial Port Speed is 38400
 */

float flowRate;
unsigned int flowMilliLitres;
unsigned long totalMilliLitres;
unsigned long oldTime;

int StopButtonState = 0;



void setup() {
  
  // Initialize a serial connection for reporting values to the host
  Serial.begin(38400);
  
  pinMode(LedRed, OUTPUT);
  pinMode(LedGreen, OUTPUT);
  pinMode(LedBlue, OUTPUT);
  // Cycle LED through Colors to show boot loader
  IPL();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (CheckStartButton()) { 
    Serial.println("Start"); 
    setColor(0, 255, 0);
  } else {
    setColor(255, 0, 0);
     Serial.println("Stop"); 
  }
}

void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(LedRed, red);
  analogWrite(LedGreen, green);
  analogWrite(LedBlue, blue);  
}


boolean CheckStartButton()
{
  int StartButtonState = 0;
  StartButtonState =  digitalRead(ButtonStart);
  if (StartButtonState == HIGH) {
    return  true;
  } else {
    return  false;
  }
}

