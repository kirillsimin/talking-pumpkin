#include <Arduino.h>
#include "DFRobotDFPlayerMini.h"

#include "constants.h"

#include "time_functions.h"
#include "mp3_detail.h"

void setup()
{
  pinMode(pirPin,INPUT);
  pinMode(soundPin, INPUT);

  pinMode(motionLedPin, OUTPUT);
  pinMode(soundLedPin, OUTPUT);
  
  Serial.begin(115200);
  #include "mp3_setup.h"
}
 
void loop()
{

  
  bool isDetected = digitalRead(pirPin);
  now = millis();
 
  #include "is_detected.h"


  // if sound input, play RESPONSE
  boolean sound = ! digitalRead(soundPin);
  
  if (waitingForVoice == true & sound == true) {
    Serial.println();
    Serial.println("Voice is detected");
    delay(1000);
    
    waitingForVoice = false;
    digitalWrite(soundLedPin, LOW);

    // play random RESPONSE
    int responseCount = -1;
    while (responseCount == -1) {
      responseCount = myDFPlayer.readFileCountsInFolder(2);
    }
    
    Serial.println();
    Serial.print("Files in response folder : ");
    Serial.println(responseCount);
    
    int randomResponse = random(1, responseCount);
    
    Serial.println();
    Serial.print("Playing response ");
    Serial.println(randomResponse);
  
    myDFPlayer.playFolder(2, randomResponse);


    delay(1000);
  }
 
  #include "should_turn_off.h"

}
