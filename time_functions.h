int timePassed()
{
  return now - lastTrigger;
}

int timeLeft()
{
  return motionInterval - timePassed();
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
  
  return (timePassed() > motionInterval);
}
