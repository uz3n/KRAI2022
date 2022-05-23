void iniit() {
  /* Motor */
  pinMode(BE_RPWM_PIN, OUTPUT);
  pinMode(BE_LPWM_PIN, OUTPUT);
  pinMode(KA_RPWM_PIN, OUTPUT);
  pinMode(KA_LPWM_PIN, OUTPUT);
  pinMode(KI_RPWM_PIN, OUTPUT);
  pinMode(KI_LPWM_PIN, OUTPUT);

  pinMode(PW_RPWM_PIN, OUTPUT);
  pinMode(PW_LPWM_PIN, OUTPUT);

  ServoKanan.attach(A0);
  ServoKiri.attach(A1);
  
  pinMode(tutup, OUTPUT);
  pinMode(buka, OUTPUT);
}
