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
//  Serial.print("now: ");
//  Serial.println(now);
//  
//  Serial.print("time passed: ");
//  Serial.println(timePassed());
//
//  Serial.print("last trigger: ");
//  Serial.println(lastTrigger);
//  
//  Serial.print("timer is going: ");
//  Serial.println(timerIsGoing);
  
  if (lastTrigger == 0) {
    return true;
  }
  
  return !timerIsGoing && timePassed() > motionInterval;
}
