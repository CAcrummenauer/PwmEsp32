/*
  Exemplo básico para utilizar o PWM do ESP32.
*/
void setup() {
  ledcAttachPin(2, 0); // Atribui o pino 2 ao canal 0 do PWM. Existem 16 canais (0 - 15) que funcionam de forma independente.
  ledcSetup(0, 512, 10); // Atribui a frequência de 512Hz ao canal 0 defina a resolução de 10bits (0 é o mínimo duty cycle - 1023 é o máximo duty cycle).
}
 
void loop() {
  int i;
  // Incrementa o duty cycle de 0 até 1023.
  for (i = 0; i < 1024; i++) {
    ledcWrite(0, i); // Escreve o valor de i como duty cycle do canal 0.
    delay(1);
  }
  // Decrementa o duty cycle de 1023 até 0.
  for (i = 1023; i > 0; i--) {
    ledcWrite(0, i);
    delay(1);
  }
}
