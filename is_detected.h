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
    
    Serial.println();
    Serial.print("Playing greeting ");
    Serial.println(randomGreeting);
    
    myDFPlayer.playFolder(1, randomGreeting);


    delay(3000);

    Serial.println();
    Serial.println("Waiting for voice.");
    waitingForVoice = true;
    digitalWrite(soundLedPin, HIGH);
  } else {
    delay(100);
    // Serial.println("Timer still going. No action.");
  }

  lastTrigger = millis();
  
}
