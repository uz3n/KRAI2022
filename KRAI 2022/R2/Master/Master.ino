/* MASTER */
/*
   Motor Pelontar
*/

#define GamePad Serial3
#define Slave Serial2

struct COM
{
  char data = 'Z';
} SLave, joyStick;

void LogData()
{
  if (GamePad.available())
  {
    joyStick.data = GamePad.read();
    Slave.print(joyStick.data);
  }
}


void setup() {
  Serial.begin(9600);
  GamePad.begin(9600);
  Slave.begin(9600);
}

void loop() {
LogData();
}
