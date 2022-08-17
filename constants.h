// pir
#define motionInterval 8*1000
#define timeGap 1000
#define pirPin 21

unsigned long now = millis();
unsigned long lastTrigger = 0;
boolean timerIsGoing = true;

// sound sensor
int soundPin = 35;

// leds
int motionLedPin = 22;
int soundLedPin = 23;


// MP3
HardwareSerial mySoftwareSerial(1);
DFRobotDFPlayerMini myDFPlayer;
// void printDetail(uint8_t type, int value);

boolean waitingForVoice = false;
