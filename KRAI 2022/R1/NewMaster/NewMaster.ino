/* SERIAL */
#define Gamepad      Serial3

/* MOTOR*/
#define KA_Rpwm_PIN 3
#define KA_Lpwm_PIN 2
#define KI_Rpwm_PIN 4
#define KI_Lpwm_PIN 5

#define PL_Rpwm_PIN 7
#define PL_Lpwm_PIN 6

#define PWR_PIN 8
#define PWL_PIN 9

/* SELENOID */
#define Tutup 51
#define Buka  53

struct COM
{
  char Data = 'Z';
} Slave, Joystik;

bool ON = LOW;
bool OFF = HIGH;


void setup() {
  Serial.begin(9600);
  Gamepad.begin(9600);

  pinMode(KA_Rpwm_PIN, OUTPUT);
  pinMode(KA_Lpwm_PIN, OUTPUT);
  pinMode(KI_Rpwm_PIN, OUTPUT);
  pinMode(KI_Lpwm_PIN, OUTPUT);
  pinMode(PL_Rpwm_PIN, OUTPUT);
  pinMode(PL_Lpwm_PIN, OUTPUT);

  pinMode(PWR_PIN, OUTPUT);
  pinMode(PWL_PIN, OUTPUT);

  pinMode(Tutup, OUTPUT);
  pinMode(Buka, OUTPUT);


  digitalWrite(Tutup, ON);
  delay(300);
  digitalWrite(Buka, OFF);


  digitalWrite(PWR_PIN, LOW);
  analogWrite(PWL_PIN, LOW);


  digitalWrite(KA_Lpwm_PIN, LOW);
  digitalWrite(KA_Rpwm_PIN, LOW);
  digitalWrite(KI_Lpwm_PIN, LOW);
  digitalWrite(KI_Rpwm_PIN, LOW);
}

void loop() {
  // trialRelay();
  // trialMotor(70);
  // trialPelontar(70);
  // trialPW(255);
  // LogData();
  CtrlManual();
}

void LogData()
{
  if (Gamepad.available())
  {
    Joystik.Data = Gamepad.read();
    Serial.println(Joystik.Data);
  }
}

void CtrlManual() {
  LogData();
  if (Joystik.Data == 'A') {
    PutarKanan(40);
  } if (Joystik.Data == 'B') {
    PutarKiri(40);
  }

  if (Joystik.Data == 'E') {
    PutarDepan(100);
  } if (Joystik.Data == 'F') {
    PutarBelakang(100);
  }

  if (Joystik.Data == 'I') {
    pelontar(60);
  } if (Joystik.Data == 'J') {
    pelontar(0);
  }

  if (Joystik.Data == 'L') {
    digitalWrite(Buka, ON);
    delay(300);
    digitalWrite(Buka, OFF);
  } if (Joystik.Data == 'K') {
    digitalWrite(Tutup, ON);
    delay(300);
    digitalWrite(Tutup, OFF);
  }

  if (Joystik.Data == 'Z') {
    STOP();
  }
}
