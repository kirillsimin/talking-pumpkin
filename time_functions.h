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
  if (lastTrigger == 0) {
    return true;
  }

  Serial.print("Time passed since last trigger: ");
  Serial.println(timePassed());
  
  return (timePassed() > motionInterval - timeGap);
}
