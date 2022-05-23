void STOP() {
  digitalWrite(KA_Lpwm_PIN, LOW);
  digitalWrite(KA_Rpwm_PIN, LOW);
  digitalWrite(KI_Lpwm_PIN, LOW);
  digitalWrite(KI_Rpwm_PIN, LOW);
  digitalWrite(PWR_PIN, LOW);
  analogWrite(PWL_PIN, LOW);
}

void PutarKanan(int pwm) {
  digitalWrite(KA_Lpwm_PIN, LOW);
  analogWrite(KA_Rpwm_PIN, pwm);
  digitalWrite(KI_Lpwm_PIN, LOW);
  analogWrite(KI_Rpwm_PIN, pwm);
}

void PutarKiri(int pwm) {
  digitalWrite(KA_Rpwm_PIN, LOW);
  analogWrite(KA_Lpwm_PIN, pwm);
  digitalWrite(KI_Rpwm_PIN, LOW);
  analogWrite(KI_Lpwm_PIN, pwm);
}

void PutarDepan(int pwm) {
  digitalWrite(PWL_PIN, LOW);
  analogWrite(PWR_PIN, pwm);
}

void PutarBelakang(int pwm) {
  digitalWrite(PWR_PIN, LOW);
  analogWrite(PWL_PIN, pwm);
}

void pelontar(int pwm) {
  digitalWrite(PL_Lpwm_PIN, LOW);
  analogWrite(PL_Rpwm_PIN, pwm);
}
