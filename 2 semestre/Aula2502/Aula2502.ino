// atribui nomes aos pinos de I/O
#define BT1 8
#define BT2 9
#define ledR 2
#define ledW 3
#define ledB 4

void setup() {
  // habilitar comunicação SERIAL (baud rate de 9600 bits/s)
  Serial.begin(9600);

  // configura os pinos de Input
  pinMode(BT1, INPUT);
  pinMode(BT2, INPUT);

  // configura os pinos de Output
  pinMode(ledR, OUTPUT);
  pinMode(ledW, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() {

  bool statusBT1 = digitalRead(BT1);

  if (digitalRead(BT1) == HIGH) {

    Serial.println("BT1 ligadoo! =D");

    digitalWrite(ledB, HIGH);
    digitalWrite(ledR, LOW);

    delay(250);

    digitalWrite(ledR, HIGH);
    digitalWrite(ledB, LOW);

    delay(250);

  } else if (digitalRead(BT2) == HIGH) {

    digitalWrite(ledR, HIGH);
    delay(100);
    digitalWrite(ledR, LOW);
    delay(100);
    digitalWrite(ledW, HIGH);
    delay(100);
    digitalWrite(ledW, LOW);
    delay(100);
    digitalWrite(ledB, HIGH);
    delay(100);
    digitalWrite(ledB, LOW);

  } else {
    digitalWrite(ledR, LOW);
    digitalWrite(ledW, HIGH);

    delay(300);

    digitalWrite(ledW, LOW);

    delay(300);
  }
}
