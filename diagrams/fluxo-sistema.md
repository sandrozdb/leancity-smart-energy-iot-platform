# 🔄 Fluxo do Sistema — LeanCity

## 📌 Visão Geral

Este documento apresenta o fluxo de funcionamento do projeto LeanCity — Sistema de Eficiência Energética com IoT.

O fluxo mostra como os sensores coletam dados do ambiente, como o microcontrolador processa essas informações e como os atuadores são acionados para melhorar a eficiência energética.

---

## 🎯 Objetivo do Fluxo

O objetivo do fluxo é representar de forma simples e organizada o caminho percorrido pelos dados dentro do sistema.

A solução segue a lógica de:

Coleta de dados → Processamento → Tomada de decisão → Acionamento automático → Economia de energia

---

## 🏙️ Fluxo Geral do Sistema

Sensores do Ambiente
↓
Leitura dos Dados
↓
Microcontrolador
↓
Processamento das Informações
↓
Análise das Condições
↓
Tomada de Decisão
↓
Acionamento dos Atuadores
↓
Redução do Desperdício de Energia

---

## 🧩 Etapas do Fluxo

## 1. Coleta de Dados

Os sensores realizam a leitura das condições do ambiente.

Dados coletados:

* Presença
* Luminosidade
* Temperatura
* Consumo energético

---

## 2. Envio dos Dados ao Microcontrolador

Após a leitura, os valores dos sensores são enviados ao microcontrolador.

O microcontrolador recebe sinais digitais e analógicos, processando cada variável de acordo com a lógica programada.

---

## 3. Processamento das Informações

O sistema interpreta os valores recebidos dos sensores.

Nessa etapa, o microcontrolador identifica:

* Se há presença no ambiente
* Se a luminosidade está baixa ou suficiente
* Se o consumo energético está dentro do limite
* Se a temperatura está elevada

---

## 4. Tomada de Decisão

Com base nos dados processados, o sistema toma decisões automáticas.

Exemplos:

* Se houver presença e baixa luminosidade, a iluminação é acionada.
* Se não houver presença, a iluminação é desligada.
* Se a luminosidade natural for suficiente, a iluminação artificial permanece desligada.
* Se o consumo energético estiver elevado, o buzzer é acionado.
* Se a temperatura estiver elevada, o sistema exibe uma mensagem de atenção.

---

## 5. Acionamento dos Atuadores

Após a tomada de decisão, os atuadores executam as ações.

Atuadores utilizados:

* LED para representar iluminação
* Relé para representar acionamento de carga
* Buzzer para alerta de consumo elevado

---

## 6. Monitoramento

O sistema exibe as informações no monitor serial, permitindo acompanhar o comportamento da solução durante os testes.

Informações exibidas:

* Presença detectada
* Luminosidade
* Temperatura
* Consumo energético
* Status da iluminação
* Status do alerta

---

## 📊 Fluxo AS-IS — Sem Automação

Receber condição do ambiente manualmente
↓
Verificar se há pessoas no local
↓
Verificar se a luz está ligada
↓
Verificar consumo manualmente
↓
Ligar ou desligar dispositivos manualmente
↓
Registrar informações manualmente

---

## 🚀 Fluxo TO-BE — Com LeanCity

Sensor identifica presença
↓
Sensor mede luminosidade
↓
Sensor monitora consumo energético
↓
Microcontrolador processa dados
↓
Sistema toma decisão automaticamente
↓
Iluminação ou carga é acionada/desligada
↓
Alerta é emitido se houver consumo elevado
↓
Dados são exibidos para acompanhamento

---

## ✅ Resultado Esperado

Com esse fluxo, o LeanCity demonstra como sensores, automação e sistemas embarcados podem ser aplicados para reduzir desperdícios e aumentar a eficiência energética.

O sistema torna o controle de dispositivos mais inteligente, reduz a dependência de ações manuais e contribui para ambientes mais sustentáveis.
