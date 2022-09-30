
// if sound input, play RESPONSE
boolean sound = ! digitalRead(soundPin);

if (waitingForVoice == true & sound == true) {
  Serial.println("Voice is detected.");
  digitalWrite(soundLedPin, LOW);
  waitingForVoice = false;

  // play random RESPONSE
  int responseCount = -1;
  while (responseCount == -1) {
    responseCount = myDFPlayer.readFileCountsInFolder(2);
  }

  int randomResponse = random(1, responseCount);
  
  Serial.print("Playing response ");
  Serial.print(randomResponse);
  Serial.print(" of ");
  Serial.println(responseCount);

  myDFPlayer.playFolder(2, randomResponse);

  responsePlayed = true;
}
