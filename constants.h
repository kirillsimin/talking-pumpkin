// pir
#define motionInterval 10*1000
#define pirPin 21

unsigned long now = millis();
unsigned long lastTrigger = 0;
boolean timerIsGoing = false;

int randomGreeting = 0;

// sound sensor
int soundPin = 35;

// leds
int motionLedPin = 22;
int soundLedPin = 23;


// MP3
HardwareSerial mySoftwareSerial(1);
DFRobotDFPlayerMini myDFPlayer;

boolean waitingForVoice = false;
boolean responsePlayed = false;
