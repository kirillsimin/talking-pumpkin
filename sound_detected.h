
// if sound input, play RESPONSE
boolean sound = ! digitalRead(soundPin);

if (waitingForVoice == true & sound == true) {
  Serial.println("Voice is detected.");
  digitalWrite(soundLedPin, LOW);
  waitingForVoice = false;

  delay(100);

  // play random RESPONSE
  int responseCount = -1;
  while (responseCount == -1) {
    responseCount = myDFPlayer.readFileCountsInFolder(2);
  }

  int randomResponse = random(1, responseCount);
  
  Serial.print("Playing response ");
  // same as greeting for thanksgiving jokes
  Serial.println(randomGreeting);
  //  Serial.print(" of ");
  //  Serial.println(responseCount);

  myDFPlayer.playFolder(2, randomGreeting);

  responsePlayed = true;
}
