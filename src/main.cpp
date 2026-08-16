#include <Arduino.h>

#define PIN_SENSOR_PRESENCA 4
#define PIN_SENSOR_LUMINOSIDADE 34
#define PIN_SENSOR_TEMPERATURA 35
#define PIN_SENSOR_CONSUMO 32
#define PIN_LED_ILUMINACAO 2
#define PIN_RELE_CARGA 18
#define PIN_BUZZER_ALERTA 5

const int LIMITE_LUMINOSIDADE = 1800;
const int LIMITE_CONSUMO = 3000;
const int LIMITE_TEMPERATURA = 2800;

void configurarPinos() {
    pinMode(PIN_SENSOR_PRESENCA, INPUT);
    pinMode(PIN_LED_ILUMINACAO, OUTPUT);
    pinMode(PIN_RELE_CARGA, OUTPUT);
    pinMode(PIN_BUZZER_ALERTA, OUTPUT);
    digitalWrite(PIN_LED_ILUMINACAO, LOW);
    digitalWrite(PIN_RELE_CARGA, LOW);
    digitalWrite(PIN_BUZZER_ALERTA, LOW);
}

void controlarIluminacao(bool presenca, int luminosidade) {
    const bool ligar = presenca && luminosidade < LIMITE_LUMINOSIDADE;
    digitalWrite(PIN_LED_ILUMINACAO, ligar ? HIGH : LOW);
    digitalWrite(PIN_RELE_CARGA, ligar ? HIGH : LOW);
}

void setup() {
    Serial.begin(115200);
    configurarPinos();
    Serial.println("LeanCity iniciado.");
}

void loop() {
    const bool presenca = digitalRead(PIN_SENSOR_PRESENCA) == HIGH;
    const int luminosidade = analogRead(PIN_SENSOR_LUMINOSIDADE);
    const int temperatura = analogRead(PIN_SENSOR_TEMPERATURA);
    const int consumo = analogRead(PIN_SENSOR_CONSUMO);

    controlarIluminacao(presenca, luminosidade);
    digitalWrite(PIN_BUZZER_ALERTA, consumo > LIMITE_CONSUMO ? HIGH : LOW);

    Serial.printf("Presenca: %s | Luz: %d | Temperatura: %d | Consumo: %d\n",
                  presenca ? "sim" : "nao", luminosidade, temperatura, consumo);
    if (temperatura > LIMITE_TEMPERATURA) {
        Serial.println("Alerta: temperatura elevada.");
    }
    delay(3000);
}
