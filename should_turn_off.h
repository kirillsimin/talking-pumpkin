
if(shouldTurnOff()) {
  Serial.println("Timer is up. No motion. Turning off.");

  timerIsGoing = false;
  digitalWrite(motionLedPin, LOW);

  waitingForVoice = false;
  digitalWrite(soundLedPin, LOW);
}
