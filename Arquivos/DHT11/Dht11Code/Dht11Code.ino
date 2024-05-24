#include <DHT.h>

#define DHTPIN 23 // Pino digital ao qual o DHT11 está conectado
#define DHTTYPE DHT11 // Tipo de sensor (DHT11)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  delay(1000); // Aguarda 1 segundos entre leituras

  float tempC = dht.readTemperature(); // Lê a temperatura em graus Celsius
  float humi = dht.readHumidity(); // Lê a umidade relativa do ar

  if (isnan(tempC) || isnan(humi)) {
    Serial.println("Falha ao ler dados do sensor!");
  } else {
    Serial.print("Temperatura: ");
    Serial.print(tempC);
    Serial.println(" °C");

    Serial.print("Umidade: ");
    Serial.print(humi);
    Serial.println(" %");
  }
}
