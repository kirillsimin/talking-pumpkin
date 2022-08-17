
// if sound input, play RESPONSE
boolean sound = ! digitalRead(soundPin);

if (waitingForVoice == true & sound == true) {
  waitingForVoice = false;
  Serial.println();
  Serial.println("Voice is detected.");
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
