if(isDetected){
  // Serial.println(" * * * MOTION DETECTED * * * ");
  timerIsGoing = true;

  if (shouldTurnOn()) {
    Serial.println("Timer is not going. Turning on.");
    digitalWrite(motionLedPin, HIGH);

    // play GREETING
    
    int greetingsCount = -1;
    while (greetingsCount == -1) {
      greetingsCount = myDFPlayer.readFileCountsInFolder(1);
    }

    Serial.println();
    Serial.print("Files in greeting folder : ");
    Serial.println(greetingsCount);
    
    int randomGreeting = random(1, greetingsCount);
    
    Serial.print("Playing greeting ");
    Serial.println(randomGreeting);
    
    myDFPlayer.playFolder(1, randomGreeting);

  } else {
    delay(100);
    // Serial.println("Timer still going. No action.");
  }

  lastTrigger = millis();
  
}

if (myDFPlayer.available()) {
  printDetail(myDFPlayer.readType(), myDFPlayer.read()); //Print the detail message from DFPlayer to handle different errors and states.
  
  if (myDFPlayer.readType() == DFPlayerPlayFinished && !waitingForVoice && !shouldTurnOff()) {
    Serial.println("Waiting for voice.");
    waitingForVoice = true;
    digitalWrite(soundLedPin, HIGH);
  }

}
