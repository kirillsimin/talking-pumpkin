if(isDetected){
  // Serial.println(" * * * MOTION DETECTED * * * ");
  timerIsGoing = true;

  if (shouldTurnOn()) {
    Serial.println();
    Serial.println("MOTION. Timer is not going. Turning on.");
    digitalWrite(motionLedPin, HIGH);

    // play GREETING
    int greetingsCount = -1;
    while (greetingsCount == -1) {
      greetingsCount = myDFPlayer.readFileCountsInFolder(1);
    }

    randomGreeting = random(1, greetingsCount);
    
    Serial.print("Playing greeting ");
    Serial.print(randomGreeting);
    Serial.print(" of ");
    Serial.println(greetingsCount);
    
    myDFPlayer.playFolder(1, randomGreeting);

    responsePlayed = false;
  }
  lastTrigger = millis();
  
}

if (myDFPlayer.available()) {    
  if (myDFPlayer.readType() == 5 && waitingForVoice == false && responsePlayed == false) {
    Serial.println("Waiting for voice.");
    digitalWrite(soundLedPin, HIGH);
    waitingForVoice = true;
  }

}
