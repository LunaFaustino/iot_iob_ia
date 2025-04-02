// biblioteca WiFi para ESP32
#include <WiFi.h>

// insira as credenciais da rede WiFi:
// nome da rede (SSID: Service Set Identifier)
#define SSID "iphone luna"
// senha da rede
#define SENHA "luna2510"

// rotina de configuração (roda apenas uma vez...)
void setup() {
  // velocidade padrão para monitor serial do ESP32
  Serial.begin(115200);

  Serial.print("Conectando ao Wi-Fi");  

  WiFi.begin(SSID, SENHA);
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");

  // imprime o nome da rede, o endereço IP e o MAC Address do módulo:
  Serial.println("Conectado a: " + String(SSID));
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
  Serial.println("MAC Address: " + WiFi.macAddress());
}

// rotina principal (roda ciclicamente...)
void loop() {
  
}