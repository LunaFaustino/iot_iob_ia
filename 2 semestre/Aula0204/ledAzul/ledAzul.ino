// LED azul já ligado ao pino 2

#define LED_ONBOARD 2

void setup() {
  // velocidade de comunicação serial padrão para ESP32 = 115200 bits/s
  Serial.begin(115200);

  pinMode(LED_ONBOARD, OUTPUT);

}

void loop() {
  Serial.println("Oin");
  // HIGH: 3,3V
  // LOW: 0V
  digitalWrite(LED_ONBOARD, HIGH);
  delay(200);
  digitalWrite(LED_ONBOARD, LOW);
  delay(200);

}
