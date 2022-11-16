
if(shouldTurnOff()) {
  Serial.println();
  Serial.println("Timer is up. No motion. Turning off.");
  Serial.println();

  timerIsGoing = false;
  digitalWrite(motionLedPin, LOW);

  waitingForVoice = false;
  digitalWrite(soundLedPin, LOW);
}
