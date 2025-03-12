// atribui nomes aos pinos de I/O
#define BT1 8
#define BT2 9
#define ledR 2
#define ledW 3
#define ledB 4

int valor; 

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

  // conversor analógico digital

  valor = analogRead(A2);
  Serial.println(valor);

  
}

