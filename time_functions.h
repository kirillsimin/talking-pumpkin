int timePassed()
{
  return now - lastTrigger;
}

int timeLeft()
{
  return motionInterval - (now - lastTrigger);
}

bool shouldTurnOff() 
{ 
  return timerIsGoing && (timePassed() > motionInterval);
}

bool shouldTurnOn()
{
//  Serial.print("Time passed since last trigger: ");
//  Serial.println(timePassed());
  
  if (lastTrigger == 0) {
    return true;
  }
  
  return (timePassed() > motionInterval - timeGap);
}
