#include <Arduino.h>

// LeanCity — Sistema de Eficiência Energética com IoT
// Autor: Sandro Ferreira
// Projeto acadêmico - UniFECAF

// Sensores
#define PIN_SENSOR_PRESENCA 4
#define PIN_SENSOR_LUMINOSIDADE 34
#define PIN_SENSOR_TEMPERATURA 35
#define PIN_SENSOR_CONSUMO 32

// Atuadores
#define PIN_LED_ILUMINACAO 2
#define PIN_RELE_CARGA 18
#define PIN_BUZZER_ALERTA 5

// Limites de controle
const int LIMITE_LUMINOSIDADE = 1800;
const int LIMITE_CONSUMO = 3000;
const int LIMITE_TEMPERATURA = 2800;

void configurarPinos() {
pinMode(PIN_SENSOR_PRESENCA, INPUT);

```
pinMode(PIN_LED_ILUMINACAO, OUTPUT);
pinMode(PIN_RELE_CARGA, OUTPUT);
pinMode(PIN_BUZZER_ALERTA, OUTPUT);

digitalWrite(PIN_LED_ILUMINACAO, LOW);
digitalWrite(PIN_RELE_CARGA, LOW);
digitalWrite(PIN_BUZZER_ALERTA, LOW);
```

}

int lerSensorAnalogico(int pino) {
return analogRead(pino);
}

bool detectarPresenca() {
int presenca = digitalRead(PIN_SENSOR_PRESENCA);
return presenca == HIGH;
}

void controlarIluminacao(bool presenca, int luminosidade) {
if (presenca && luminosidade < LIMITE_LUMINOSIDADE) {
digitalWrite(PIN_LED_ILUMINACAO, HIGH);
digitalWrite(PIN_RELE_CARGA, HIGH);
Serial.println("Iluminação acionada automaticamente.");
} else {
digitalWrite(PIN_LED_ILUMINACAO, LOW);
digitalWrite(PIN_RELE_CARGA, LOW);
Serial.println("Iluminação desligada para economia de energia.");
}
}

void verificarConsumoEnergetico(int consumo) {
if (consumo > LIMITE_CONSUMO) {
digitalWrite(PIN_BUZZER_ALERTA, HIGH);
Serial.println("Alerta: consumo energético elevado.");
} else {
digitalWrite(PIN_BUZZER_ALERTA, LOW);
Serial.println("Consumo energético dentro do limite.");
}
}

void exibirDados(
bool presenca,
int luminosidade,
int temperatura,
int consumo
) {
Serial.println("===== LeanCity - Monitoramento =====");

```
Serial.print("Presença detectada: ");
Serial.println(presenca ? "Sim" : "Não");

Serial.print("Luminosidade: ");
Serial.println(luminosidade);

Serial.print("Temperatura simulada: ");
Serial.println(temperatura);

Serial.print("Consumo energético: ");
Serial.println(consumo);

Serial.println("------------------------------------");
```

}

void setup() {
Serial.begin(115200);
configurarPinos();

```
Serial.println("LeanCity iniciado.");
Serial.println("Sistema de Eficiência Energética com IoT");
```

}

void loop() {
bool presenca = detectarPresenca();
int luminosidade = lerSensorAnalogico(PIN_SENSOR_LUMINOSIDADE);
int temperatura = lerSensorAnalogico(PIN_SENSOR_TEMPERATURA);
int consumo = lerSensorAnalogico(PIN_SENSOR_CONSUMO);

```
exibirDados(presenca, luminosidade, temperatura, consumo);

controlarIluminacao(presenca, luminosidade);
verificarConsumoEnergetico(consumo);

if (temperatura > LIMITE_TEMPERATURA) {
    Serial.println("Atenção: temperatura elevada no ambiente.");
}

delay(3000);
```

}
