# 🏗️ Arquitetura da Solução — LeanCity

## 📌 Visão Geral

Este documento apresenta a arquitetura do projeto LeanCity, um sistema de eficiência energética baseado em Internet das Coisas.

A solução foi pensada para representar um ambiente inteligente capaz de monitorar variáveis como presença, luminosidade, temperatura e consumo energético, utilizando sensores e automação para reduzir desperdícios e otimizar o uso de recursos.

---

## 🎯 Objetivo da Arquitetura

O objetivo da arquitetura é integrar sensores, microcontrolador, atuadores e lógica de decisão em um sistema capaz de automatizar o controle de dispositivos elétricos.

A arquitetura permite:

* Monitorar presença no ambiente
* Medir luminosidade
* Simular temperatura
* Monitorar consumo energético
* Acionar iluminação automaticamente
* Emitir alertas para consumo elevado
* Reduzir desperdício de energia
* Demonstrar conceitos de cidade inteligente

---

## 🧩 Componentes da Solução

### 1. Sensores

Os sensores são responsáveis por coletar informações do ambiente.

Sensores utilizados ou simulados:

* Sensor de presença
* Sensor de luminosidade
* Sensor de temperatura
* Sensor de consumo energético

Esses sensores permitem que o sistema identifique as condições do ambiente e tome decisões automáticas.

---

### 2. Microcontrolador

O microcontrolador é responsável por receber os dados dos sensores, processar as informações e executar a lógica de automação.

Funções principais:

* Ler sensores digitais e analógicos
* Processar dados ambientais
* Comparar valores com limites definidos
* Acionar atuadores
* Exibir informações no monitor serial
* Representar a inteligência central do sistema

---

### 3. Atuadores

Os atuadores são responsáveis por executar ações físicas ou simuladas com base nas decisões do sistema.

Atuadores utilizados:

* LED para representar iluminação
* Relé para acionamento de carga
* Buzzer para alerta de consumo elevado

---

### 4. Lógica de Decisão

A lógica de decisão interpreta os dados dos sensores e define o comportamento do sistema.

Exemplos de decisão:

* Se houver presença e o ambiente estiver escuro, a iluminação é acionada.
* Se não houver presença, a iluminação é desligada.
* Se o consumo energético estiver elevado, o alerta sonoro é acionado.
* Se a temperatura estiver elevada, o sistema registra uma mensagem de atenção.

---

### 5. Monitoramento

O monitoramento permite acompanhar o comportamento do sistema durante a execução.

No projeto, o monitor serial exibe informações como:

* Presença detectada
* Nível de luminosidade
* Temperatura simulada
* Consumo energético
* Status da iluminação
* Alertas do sistema

---

## 🔄 Fluxo da Arquitetura

Sensores do Ambiente
↓
Leitura pelo Microcontrolador
↓
Processamento dos Dados
↓
Análise das Condições
↓
Tomada de Decisão
↓
Acionamento dos Atuadores
↓
Economia de Energia e Monitoramento

---

## 🏙️ Relação com Cidades Inteligentes

O projeto LeanCity representa uma aplicação simplificada de cidade inteligente.

Em cidades inteligentes, sensores e sistemas automatizados são utilizados para melhorar a gestão de recursos, reduzir desperdícios e tornar os ambientes mais eficientes.

Este projeto aplica esses conceitos em escala reduzida, simulando um ambiente onde a tecnologia auxilia na economia de energia e na sustentabilidade.

---

## ⚡ Eficiência Energética

A eficiência energética é alcançada por meio do uso inteligente da energia.

No projeto, isso ocorre principalmente por:

* Desligamento automático de cargas sem necessidade
* Acionamento da iluminação apenas quando necessário
* Monitoramento de consumo elevado
* Automação baseada em dados do ambiente

---

## ✅ Resultado Esperado

Com essa arquitetura, o sistema deve ser capaz de monitorar o ambiente, interpretar as condições medidas e acionar dispositivos de forma inteligente.

O projeto demonstra a aplicação prática de IoT, automação, sensores, sistemas embarcados, eficiência energética e sustentabilidade tecnológica.
