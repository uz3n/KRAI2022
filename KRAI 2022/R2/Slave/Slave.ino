/* SLAVE */
/*
   Servo Dan Motor (kecuali Pelontar)
*/

#include <Servo.h>
Servo ServoKanan;
Servo ServoKiri;

#define ENC_BE_CHA    33
#define ENC_BE_CHB    31
#define ENC_KA_CHA    29
#define ENC_KA_CHB    27
#define ENC_KI_CHA    25
#define ENC_KI_CHB    23

#define BE_RPWM_PIN   3
#define BE_LPWM_PIN   2
#define KA_RPWM_PIN   5
#define KA_LPWM_PIN   4
#define KI_RPWM_PIN   7
#define KI_LPWM_PIN   6

#define PW_RPWM_PIN   8
#define PW_LPWM_PIN   9

#define Ca_RPWM_PIN   11
#define Ca_LPWM_PIN   10


#define buka 49
#define tutup 47

struct COM
{
  char data = 'Z';
} Master, joyStick;

bool ON = LOW;
bool OFF = HIGH;

void LogData()
{
  if (Serial3.available())
  {
    Master.data = Serial3.read();
    Serial.println(Master.data);
  }
}
void Ctrlmanual() {
  LogData();
  if (Master.data == 'Z') {
    STOP();
  }
  if (Master.data == 'A') {
    PutarKanan(60);
  }
  if (Master.data == 'B') {
    PutarKiri(60);
  }
  if (Master.data == 'E') {
    Maju(60);
  }
  if (Master.data == 'F') {
    Mundur(60);
  }
  if (Master.data == 'G') {
    Kanan(60);
  }
  if (Master.data == 'H') {
    Kiri(60);
  }

  if (Master.data == 'L') {
    digitalWrite(buka, ON);
    delay(300);
    digitalWrite(buka, OFF);
  } if (Master.data == 'K') {
    digitalWrite(tutup, ON);
    delay(300);
    digitalWrite(tutup, OFF);
  }


  if (Master.data == 'C') {
    CptKan(50);
  }  if (Master.data == 'D') {
    CptKir(50);
  }

  if (Master.data == 'P') {
    PW_TURUN(100);
  }  if (Master.data == 'Q') {
    PW_NAIK(100);
  }

  if (Master.data == 'M') {
    servo(0);
  }  if (Master.data == 'N') {
    servo(90);
  }
}


void setup() {
  Serial3.begin(9600);
  Serial.begin(9600);
  iniit();
  digitalWrite(buka, OFF);
  digitalWrite(tutup, OFF);
}

void loop() {
  // trialPwm(60);
  Ctrlmanual();
  // trialServo(90);
  // servo(90,93);
}
