
void servo(int pos) {
  ServoKanan.write(pos);
  ServoKiri.write(pos);
}

void CptKan(int pwm) {
  digitalWrite(Ca_LPWM_PIN, LOW);
  analogWrite(Ca_RPWM_PIN, pwm);
}

void CptKir(int pwm) {
  digitalWrite(Ca_RPWM_PIN, LOW);
  analogWrite(Ca_LPWM_PIN, pwm);
}

void PW_TURUN(int pwm) {
  digitalWrite(PW_LPWM_PIN, LOW);
  analogWrite(PW_RPWM_PIN, pwm);
}

void PW_NAIK(int pwm) {
  digitalWrite(PW_RPWM_PIN, LOW);
  analogWrite(PW_LPWM_PIN, pwm);
}


void STOP() {
  digitalWrite(BE_LPWM_PIN, LOW);
  digitalWrite(BE_RPWM_PIN, LOW);
  digitalWrite(KA_LPWM_PIN, LOW);
  digitalWrite(KA_RPWM_PIN, LOW);
  digitalWrite(KI_LPWM_PIN, LOW);
  digitalWrite(KI_RPWM_PIN, LOW);
  digitalWrite(PW_RPWM_PIN, LOW);
  analogWrite(PW_LPWM_PIN, LOW);
  digitalWrite(Ca_RPWM_PIN, LOW);
  analogWrite(Ca_LPWM_PIN, LOW);
}

void PutarKanan(int Pwm) {
  digitalWrite(BE_RPWM_PIN, LOW);
  analogWrite(BE_LPWM_PIN, Pwm);
  digitalWrite(KA_RPWM_PIN, LOW);
  analogWrite(KA_LPWM_PIN, Pwm);
  digitalWrite(KI_RPWM_PIN, LOW);
  analogWrite(KI_LPWM_PIN, Pwm);
}

void PutarKiri(int Pwm) {
  digitalWrite(BE_LPWM_PIN, LOW);
  analogWrite(BE_RPWM_PIN, Pwm);
  digitalWrite(KA_LPWM_PIN, LOW);
  analogWrite(KA_RPWM_PIN, Pwm);
  digitalWrite(KI_LPWM_PIN, LOW);
  analogWrite(KI_RPWM_PIN, Pwm);
}


void Mundur(int Pwm) {
  digitalWrite(BE_LPWM_PIN, LOW);
  analogWrite(BE_RPWM_PIN, LOW);
  digitalWrite(KA_RPWM_PIN, LOW);
  analogWrite(KA_LPWM_PIN, Pwm);
  digitalWrite(KI_LPWM_PIN, LOW);
  analogWrite(KI_RPWM_PIN, Pwm);
}
void Maju(int Pwm) {
  digitalWrite(BE_RPWM_PIN, LOW);
  analogWrite(BE_LPWM_PIN, LOW);
  digitalWrite(KA_LPWM_PIN, LOW);
  analogWrite(KA_RPWM_PIN, Pwm);
  digitalWrite(KI_RPWM_PIN, LOW);
  analogWrite(KI_LPWM_PIN, Pwm);
}
void Kanan(int Pwm) {
  digitalWrite(BE_LPWM_PIN, LOW);
  analogWrite(BE_RPWM_PIN, Pwm);
  digitalWrite(KA_RPWM_PIN, LOW);
  analogWrite(KA_LPWM_PIN, Pwm / 2);
  digitalWrite(KI_RPWM_PIN, LOW);
  analogWrite(KI_LPWM_PIN, Pwm / 2);
}
void Kiri(int Pwm) {
  digitalWrite(BE_RPWM_PIN, LOW);
  analogWrite(BE_LPWM_PIN, Pwm);
  digitalWrite(KA_LPWM_PIN, LOW);
  analogWrite(KA_RPWM_PIN, Pwm / 2);
  digitalWrite(KI_LPWM_PIN, LOW);
  analogWrite(KI_RPWM_PIN, Pwm / 2);
}
