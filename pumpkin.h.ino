#include <Arduino.h>
#include "DFRobotDFPlayerMini.h"
#include "constants.h"
#include "time_functions.h"


void setup()
{
  Serial.begin(115200);
  Serial.println("Setting up");
  pinMode(pirPin,INPUT);
  Serial.println("PIR IN set up");
  pinMode(soundPin, INPUT);
  Serial.println("SOUND set up");

  pinMode(motionLedPin, OUTPUT);
  Serial.println("Motion LED set up");
  pinMode(soundLedPin, OUTPUT);
  Serial.println("Sound LED set up");
  

  #include "mp3_setup.h"
}
 
void loop()
{
  bool isDetected = digitalRead(pirPin);
  now = millis();
 
  #include "is_detected.h"

  #include "sound_detected.h"
 
  #include "should_turn_off.h"

}
