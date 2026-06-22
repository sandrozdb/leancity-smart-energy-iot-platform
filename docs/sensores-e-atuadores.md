# 🔧 Sensores e Atuadores — LeanCity

## 📌 Visão Geral

Este documento apresenta os sensores e atuadores utilizados no projeto LeanCity — Sistema de Eficiência Energética com IoT.

O objetivo desses componentes é permitir que o sistema monitore o ambiente, interprete as condições medidas e realize ações automáticas para reduzir desperdícios de energia.

---

## 🎯 Objetivo dos Sensores e Atuadores

Os sensores permitem que o sistema colete informações do ambiente.

Os atuadores permitem que o sistema execute ações com base nos dados coletados.

Essa integração é essencial para aplicações de Internet das Coisas, automação predial, cidades inteligentes e eficiência energética.

---

## 👤 Sensor de Presença

O sensor de presença é utilizado para identificar se há pessoas no ambiente.

No projeto, ele permite que o sistema tome decisões automáticas, como ligar ou desligar a iluminação conforme a ocupação do local.

### Funções no sistema

* Detectar presença no ambiente
* Evitar iluminação ligada em locais vazios
* Acionar dispositivos apenas quando necessário
* Contribuir para economia de energia

### Aplicações possíveis

* Salas de aula
* Escritórios
* Corredores
* Laboratórios
* Ambientes comerciais
* Prédios inteligentes

---

## 💡 Sensor de Luminosidade

O sensor de luminosidade mede a quantidade de luz disponível no ambiente.

Ele permite que o sistema identifique se a iluminação artificial realmente precisa ser acionada.

### Funções no sistema

* Medir o nível de luz do ambiente
* Evitar acionamento desnecessário de lâmpadas
* Apoiar decisões automáticas de iluminação
* Melhorar a eficiência energética

### Exemplo de funcionamento

Se houver presença no ambiente, mas a luminosidade natural estiver suficiente, a iluminação artificial pode permanecer desligada.

---

## 🌡️ Sensor de Temperatura

O sensor de temperatura permite monitorar a condição térmica do ambiente.

No projeto, ele pode ser utilizado para indicar situações de temperatura elevada ou apoiar futuras integrações com sistemas de climatização.

### Funções no sistema

* Monitorar temperatura ambiente
* Identificar variações térmicas
* Apoiar decisões de automação
* Contribuir para conforto e eficiência energética

### Possíveis expansões

* Controle automático de ventiladores
* Integração com ar-condicionado
* Alertas para temperatura elevada
* Análise de conforto térmico

---

## ⚡ Sensor de Consumo Energético

O sensor de consumo energético representa a medição do uso de energia pelos dispositivos conectados.

No projeto, essa variável pode ser simulada por entrada analógica, permitindo testar situações de consumo normal ou elevado.

### Funções no sistema

* Monitorar consumo de energia
* Identificar consumo elevado
* Gerar alertas automáticos
* Apoiar análise de eficiência energética
* Indicar possíveis desperdícios

---

## 💡 LED de Iluminação

O LED é utilizado para representar uma lâmpada ou ponto de iluminação no ambiente inteligente.

Ele é acionado automaticamente conforme a presença e o nível de luminosidade.

### Funções no sistema

* Representar iluminação do ambiente
* Demonstrar acionamento automático
* Indicar funcionamento da lógica de controle
* Simular economia de energia

---

## ⚡ Relé de Carga

O relé representa o acionamento de uma carga elétrica, como lâmpada, ventilador ou outro dispositivo.

Em um ambiente real, o relé permitiria controlar equipamentos de maior potência.

### Funções no sistema

* Acionar ou desligar cargas elétricas
* Simular controle de dispositivos
* Representar automação predial
* Apoiar a redução do consumo energético

### Cuidados em aplicação real

* Verificar tensão e corrente suportadas
* Utilizar isolamento adequado
* Seguir normas de segurança elétrica
* Evitar ligação direta de cargas sem proteção

---

## 🔊 Buzzer de Alerta

O buzzer é utilizado para emitir alerta sonoro quando o consumo energético ultrapassa o limite definido.

### Funções no sistema

* Emitir alerta para consumo elevado
* Indicar situação crítica
* Apoiar monitoramento local
* Demonstrar resposta automática do sistema

---

## 📊 Resumo dos Componentes

| Componente             | Tipo             | Função                       |
| ---------------------- | ---------------- | ---------------------------- |
| Sensor de presença     | Sensor digital   | Detecta ocupação do ambiente |
| Sensor de luminosidade | Sensor analógico | Mede nível de luz            |
| Sensor de temperatura  | Sensor analógico | Monitora condição térmica    |
| Sensor de consumo      | Sensor analógico | Simula consumo energético    |
| LED                    | Atuador          | Representa iluminação        |
| Relé                   | Atuador          | Aciona carga elétrica        |
| Buzzer                 | Atuador          | Emite alerta sonoro          |

---

## 🔄 Relação entre Sensores e Atuadores

O funcionamento do sistema depende da relação entre os dados coletados e as ações executadas.

Exemplos:

* Presença detectada + baixa luminosidade = iluminação acionada
* Sem presença = iluminação desligada
* Consumo elevado = buzzer acionado
* Temperatura elevada = mensagem de atenção no sistema

---

## ✅ Resultado Esperado

Com a integração entre sensores e atuadores, o LeanCity consegue simular um ambiente inteligente capaz de tomar decisões automáticas para reduzir desperdícios e melhorar a eficiência energética.

Essa estrutura demonstra a aplicação prática de IoT, automação, sistemas embarcados, sustentabilidade e cidades inteligentes.
