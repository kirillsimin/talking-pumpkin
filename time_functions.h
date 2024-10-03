int timePassed()
{
  return now - lastTrigger;
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
  
  return !timerIsGoing && timePassed() > motionInterval;
}
