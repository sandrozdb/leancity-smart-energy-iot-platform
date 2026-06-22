# 🧪 Simulação do Projeto — LeanCity

## 📌 Visão Geral

Este documento apresenta a simulação do projeto LeanCity — Sistema de Eficiência Energética com IoT.

A simulação tem como objetivo demonstrar o funcionamento do sistema em um ambiente controlado, permitindo validar a leitura dos sensores, a lógica de decisão e o acionamento dos atuadores antes de uma possível aplicação física.

---

## 🎯 Objetivo da Simulação

O objetivo da simulação é testar o comportamento do sistema em diferentes condições de presença, luminosidade, temperatura e consumo energético.

A simulação permite verificar se o sistema consegue tomar decisões automáticas para reduzir desperdícios de energia.

---

## 🧩 Componentes Simulados

Na simulação, podem ser representados os seguintes componentes:

* Microcontrolador
* Sensor de presença
* Sensor de luminosidade
* Sensor de temperatura
* Sensor de consumo energético
* LED representando iluminação
* Relé representando acionamento de carga
* Buzzer representando alerta sonoro
* Monitor serial para acompanhamento dos dados

---

## 🔄 Funcionamento Simulado

Durante a simulação, os sensores enviam dados para o microcontrolador.

O sistema interpreta essas informações e executa ações automáticas com base nas condições do ambiente.

Exemplos de funcionamento:

* Se houver presença e baixa luminosidade, a iluminação é acionada.
* Se não houver presença, a iluminação permanece desligada.
* Se o consumo energético estiver elevado, o buzzer é acionado.
* Se a temperatura estiver elevada, o sistema exibe uma mensagem de atenção.
* Os dados são exibidos no monitor serial para acompanhamento.

---

## 👤 Teste de Presença

O sensor de presença permite identificar se o ambiente está ocupado.

### Situação 1 — Ambiente ocupado

Quando há presença no ambiente, o sistema verifica o nível de luminosidade para decidir se a iluminação deve ser acionada.

### Situação 2 — Ambiente vazio

Quando não há presença, o sistema mantém a iluminação desligada, evitando desperdício de energia.

---

## 💡 Teste de Luminosidade

O sensor de luminosidade permite avaliar se existe necessidade de iluminação artificial.

### Situação 1 — Baixa luminosidade

Se o ambiente estiver escuro e houver presença, a iluminação é acionada automaticamente.

### Situação 2 — Boa luminosidade

Se a luminosidade natural for suficiente, a iluminação permanece desligada, mesmo com presença no ambiente.

---

## ⚡ Teste de Consumo Energético

O sensor de consumo energético permite simular o uso de energia por dispositivos conectados.

### Situação normal

Quando o consumo está dentro do limite definido, o sistema mantém o alerta desligado.

### Situação de alerta

Quando o consumo ultrapassa o limite definido, o buzzer é acionado para indicar consumo elevado.

---

## 🌡️ Teste de Temperatura

O sensor de temperatura permite acompanhar a condição térmica do ambiente.

Quando a temperatura simulada ultrapassa o limite definido, o sistema exibe uma mensagem de atenção no monitor serial.

Essa funcionalidade pode ser expandida futuramente para controle de ventilação ou climatização.

---

## 📊 Dados Exibidos na Simulação

Durante a execução, o sistema pode exibir informações como:

* Presença detectada
* Nível de luminosidade
* Temperatura simulada
* Consumo energético
* Status da iluminação
* Status do alerta
* Mensagens de economia de energia
* Mensagens de consumo elevado

---

## ✅ Resultado Esperado

Ao final da simulação, espera-se que o LeanCity consiga demonstrar:

* Leitura correta dos sensores
* Tomada de decisão automática
* Acionamento da iluminação apenas quando necessário
* Desligamento de cargas em situações sem necessidade
* Alerta em caso de consumo energético elevado
* Aplicação prática de IoT em eficiência energética

---

## 🚀 Possíveis Melhorias na Simulação

A simulação pode ser aprimorada futuramente com:

* Integração com plataforma em nuvem
* Dashboard de consumo energético
* Mais sensores ambientais
* Gráficos de histórico de consumo
* Simulação de múltiplos ambientes
* Interface visual para acompanhamento
* Alertas automáticos por e-mail ou aplicativo

---

## 📌 Conclusão

A simulação do LeanCity permite validar o funcionamento da solução antes de uma aplicação física.

Ela demonstra como sensores, microcontrolador e atuadores podem trabalhar juntos para criar um ambiente mais inteligente, econômico e sustentável.
