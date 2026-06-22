# 📋 Requisitos do Projeto — LeanCity

## 📌 Visão Geral

Este documento apresenta os principais requisitos funcionais e não funcionais do projeto LeanCity — Sistema de Eficiência Energética com IoT.

Os requisitos foram definidos com base na proposta de criar uma solução inteligente para monitoramento de presença, luminosidade, temperatura e consumo energético, utilizando sensores, automação e sistemas embarcados.

---

## 🎯 Objetivo dos Requisitos

Definir as funcionalidades esperadas do sistema e as características técnicas necessárias para que a solução seja organizada, funcional, escalável e alinhada aos conceitos de Internet das Coisas, eficiência energética, automação e cidades inteligentes.

---

## ✅ Requisitos Funcionais

### RF01 — Detectar presença no ambiente

O sistema deve identificar se há presença no ambiente monitorado por meio de sensor digital.

### RF02 — Ler nível de luminosidade

O sistema deve realizar a leitura do nível de luminosidade do ambiente por meio de sensor analógico.

### RF03 — Monitorar temperatura

O sistema deve coletar ou simular informações relacionadas à temperatura do ambiente.

### RF04 — Monitorar consumo energético

O sistema deve realizar a leitura ou simulação do consumo energético dos dispositivos conectados.

### RF05 — Processar dados no microcontrolador

O microcontrolador deve receber os dados dos sensores e processar as informações de forma contínua.

### RF06 — Acionar iluminação automaticamente

O sistema deve acionar a iluminação quando houver presença e baixa luminosidade no ambiente.

### RF07 — Desligar iluminação quando não houver necessidade

O sistema deve desligar a iluminação quando não houver presença ou quando a luminosidade natural for suficiente.

### RF08 — Emitir alerta de consumo elevado

O sistema deve acionar um alerta sonoro quando o consumo energético ultrapassar o limite definido.

### RF09 — Exibir informações no monitor serial

O sistema deve exibir os dados coletados e o status da automação no monitor serial.

### RF10 — Permitir futuras expansões

O sistema deve permitir futuras integrações com nuvem, dashboards, banco de dados, aplicativos e novos sensores.

---

## ⚙️ Requisitos Não Funcionais

### RNF01 — Baixo custo

O projeto deve utilizar componentes acessíveis e de fácil utilização em ambiente acadêmico.

### RNF02 — Facilidade de implementação

A solução deve ser simples de compreender, montar, simular e demonstrar.

### RNF03 — Manutenibilidade

O código e a documentação devem ser organizados para facilitar futuras alterações e melhorias.

### RNF04 — Escalabilidade

A arquitetura deve permitir expansão para múltiplos ambientes, novos sensores e novas funcionalidades.

### RNF05 — Sustentabilidade

A solução deve contribuir para redução de desperdício de energia e melhor uso dos recursos.

### RNF06 — Confiabilidade

O sistema deve executar a leitura dos sensores e a lógica de automação de forma contínua.

### RNF07 — Usabilidade

O funcionamento do projeto deve ser claro para apresentação, testes e demonstrações acadêmicas.

### RNF08 — Segurança

Em uma aplicação real, o sistema deve considerar proteção de dados, controle de acesso e segurança elétrica.

---

## 🧪 Regras de Funcionamento

O sistema deve seguir regras básicas de decisão, como:

* Se houver presença e baixa luminosidade, a iluminação deve ser acionada.
* Se não houver presença, a iluminação deve permanecer desligada.
* Se houver boa luminosidade natural, a iluminação artificial não deve ser acionada.
* Se o consumo energético estiver elevado, o alerta sonoro deve ser acionado.
* Se a temperatura estiver elevada, o sistema deve registrar uma mensagem de atenção.

---

## 📊 Critérios de Sucesso

O projeto será considerado bem-sucedido quando conseguir demonstrar:

* Leitura de sensores simulados ou reais
* Identificação de presença
* Controle automático de iluminação
* Monitoramento de consumo energético
* Emissão de alerta para consumo elevado
* Redução de desperdício de energia
* Documentação clara da solução
* Aplicação prática de conceitos de IoT e smart city

---

## 🚀 Melhorias Relacionadas aos Requisitos

O projeto pode evoluir futuramente com novos requisitos, como:

* Integração com plataforma em nuvem
* Dashboard em Power BI
* Banco de dados para histórico de consumo
* Aplicativo mobile
* Alertas automáticos por e-mail
* Inteligência Artificial para previsão de consumo
* Controle de múltiplos ambientes
* Integração com sistemas de automação predial
