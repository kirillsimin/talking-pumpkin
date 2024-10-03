if(now - lastCheckTime >= checkInterval && isDetected){
  // only check for motion every interval
  lastCheckTime = now;
  Serial.print("#");
  if (shouldTurnOn()) {
    Serial.println();
    Serial.println("MOTION. Timer is not going. Turning on.");
    Serial.println();
    digitalWrite(motionLedPin, HIGH);

    // play GREETING
    int greetingsCount = -1;
    while (greetingsCount == -1) {
      greetingsCount = myDFPlayer.readFileCountsInFolder(1);
      Serial.println(greetingsCount);
    }

    randomGreeting = random(1, greetingsCount);
    
    Serial.print("Playing greeting ");
    Serial.print(randomGreeting);
    Serial.print(" of ");
    Serial.println(greetingsCount);
    
    myDFPlayer.playFolder(1, randomGreeting);

    responsePlayed = false;
  }

  timerIsGoing = true;
  lastTrigger = millis();
}

if (myDFPlayer.available()) {    
  if (myDFPlayer.readType() == 5 && waitingForVoice == false && responsePlayed == false) {
    Serial.println("Waiting for voice.");
    delay(1000);
    digitalWrite(soundLedPin, HIGH);
    waitingForVoice = true;
  }

}
