# 📁 Estrutura do Repositório — LeanCity

## 📌 Visão Geral

Este documento apresenta a estrutura do repositório do projeto LeanCity — Sistema de Eficiência Energética com IoT.

A organização dos arquivos foi pensada para facilitar a compreensão do projeto, separar código, documentação, dados simulados, diagramas e arquivos de configuração.

---

## 🗂️ Estrutura Geral

leancity-smart-energy-iot-platform/

├── README.md

├── LICENSE

├── .gitignore

├── platformio.ini

├── diagram.json

├── wokwi.toml

├── src/

│   └── main.cpp

├── docs/

│   ├── arquitetura.md

│   ├── problema-e-solucao.md

│   ├── sensores-e-atuadores.md

│   ├── eficiencia-energetica.md

│   ├── simulacao.md

│   ├── requisitos.md

│   ├── resultados.md

│   ├── melhorias-futuras.md

│   ├── evidencias.md

│   └── estrutura-do-repositorio.md

├── data/

│   └── consumo-energia-exemplo.csv

└── diagrams/

```
└── fluxo-sistema.md
```

---

## 📄 README.md

Arquivo principal do projeto.

Apresenta a visão geral da solução, objetivos, problema identificado, solução proposta, tecnologias utilizadas, funcionamento do sistema, benefícios, aplicações e informações do autor.

---

## 💻 src/main.cpp

Arquivo principal do código do projeto.

Responsável por:

* Ler sensor de presença
* Ler sensor de luminosidade
* Simular temperatura
* Simular consumo energético
* Processar os dados no microcontrolador
* Acionar iluminação automaticamente
* Acionar alerta sonoro em caso de consumo elevado
* Exibir dados no monitor serial

---

## ⚙️ platformio.ini

Arquivo de configuração do PlatformIO.

Define:

* Placa utilizada
* Framework Arduino
* Velocidade do monitor serial
* Configurações do ambiente de desenvolvimento

---

## 🧩 diagram.json

Arquivo de diagrama utilizado para simulação no Wokwi.

Representa:

* ESP32
* Sensor de presença
* Sensores analógicos simulados
* LED de iluminação
* Buzzer de alerta
* Relé de carga
* Conexões do circuito

---

## 🧪 wokwi.toml

Arquivo de configuração do Wokwi.

Indica os caminhos do firmware e do arquivo ELF gerados pelo PlatformIO para execução da simulação.

---

## 📚 Pasta docs

A pasta docs reúne a documentação técnica do projeto.

Ela contém explicações sobre:

* Arquitetura da solução
* Problema e solução
* Sensores e atuadores
* Eficiência energética
* Simulação
* Requisitos
* Resultados esperados
* Melhorias futuras
* Estrutura do repositório

---

## 📊 Pasta data

A pasta data contém dados simulados relacionados ao consumo energético.

O arquivo consumo-energia-exemplo.csv apresenta exemplos de leituras que poderiam ser utilizadas em dashboards, relatórios ou análises futuras.

---

## 🔄 Pasta diagrams

A pasta diagrams contém representações do fluxo do sistema.

O arquivo fluxo-sistema.md mostra como os dados percorrem o sistema, desde a coleta pelos sensores até a tomada de decisão e acionamento dos atuadores.

---

## ✅ Benefícios da Organização

Essa estrutura contribui para:

* Melhor compreensão do projeto
* Separação entre código e documentação
* Apresentação mais profissional no GitHub
* Facilidade de manutenção
* Clareza para recrutadores e avaliadores
* Demonstração de boas práticas de documentação técnica
* Evolução futura da solução

---

## 📌 Conclusão

A estrutura do repositório LeanCity foi organizada para demonstrar não apenas o funcionamento técnico da solução, mas também a capacidade de documentar, explicar e estruturar um projeto de tecnologia de forma clara e profissional.

O projeto apresenta conceitos de Internet das Coisas, automação, eficiência energética, sustentabilidade tecnológica, sensores, atuadores e cidades inteligentes.
