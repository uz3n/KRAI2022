String Data = "";
void trialMotor(int pwm) {
  digitalWrite(KA_Lpwm_PIN, LOW);
  analogWrite(KA_Rpwm_PIN, pwm);
  digitalWrite(KI_Lpwm_PIN, LOW);
  analogWrite(KI_Rpwm_PIN, pwm);
  delay(1000);
  digitalWrite(KA_Rpwm_PIN, LOW);
  analogWrite(KA_Lpwm_PIN, pwm);
  digitalWrite(KI_Rpwm_PIN, LOW);
  analogWrite(KI_Lpwm_PIN, pwm);
  delay(1000);
}

void trialPW(int pwm) {
  digitalWrite(PWL_PIN, LOW);
  analogWrite(PWR_PIN, pwm);
  delay(5000);
  digitalWrite(PWR_PIN, LOW);
  analogWrite(PWL_PIN, pwm);
  delay(5000);
}

void trialPelontar(int pwm) {
  digitalWrite(PL_Lpwm_PIN, LOW);
  analogWrite(PL_Rpwm_PIN, pwm);
}
