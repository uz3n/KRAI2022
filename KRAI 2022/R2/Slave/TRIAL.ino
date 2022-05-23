void trialPwm(int Speed) {

  analogWrite(BE_RPWM_PIN,  Speed);
  digitalWrite(BE_LPWM_PIN, LOW);
  analogWrite(KA_RPWM_PIN,  Speed);
  digitalWrite(KA_LPWM_PIN, LOW);
  analogWrite(KI_RPWM_PIN,  Speed);
  digitalWrite(KI_LPWM_PIN, LOW);
  analogWrite(PW_RPWM_PIN,  Speed);
  digitalWrite(PW_LPWM_PIN, LOW);
  analogWrite(Ca_RPWM_PIN,  Speed);
  digitalWrite(Ca_LPWM_PIN, LOW);
  delay(1000);
  analogWrite(BE_LPWM_PIN,  Speed);
  digitalWrite(BE_RPWM_PIN, LOW);
  analogWrite(KA_LPWM_PIN,  Speed);
  digitalWrite(KA_RPWM_PIN, LOW);
  analogWrite(KI_LPWM_PIN,  Speed);
  digitalWrite(KI_RPWM_PIN, LOW);
  analogWrite(PW_LPWM_PIN,  Speed);
  digitalWrite(PW_RPWM_PIN, LOW);
  analogWrite(Ca_LPWM_PIN,  Speed);
  digitalWrite(Ca_RPWM_PIN, LOW);
  delay(1000);
}


void trialServo() {
  servo(0);
  delay(500);
  servo(90);
  delay(500);
}
