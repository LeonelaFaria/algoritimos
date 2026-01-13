# algoritimos

# ENE140-2025-3
Repositório da turma de ENE140 - Programação para Engenharia - 2025/3

# Grupo 6 – Projeto Bot Multimodal no Telegram com Processamento de Imagem e Áudio

Este relatório descreve o desenvolvimento do bot do Grupo 6, um sistema computacional implementado em Python que integra um bot do Telegram com módulos de processamento de imagem e processamento de áudio utilizando diversas bibliotecas externas. O projeto foi desenvolvido como atividade acadêmica, com foco na aplicação prática de conceitos de programação, especialmente POO, organização modular do código e integração com bibliotecas externas.

Os códigos foram todos desenvolvidos no Google Collab para facilitar na manutenção e colaboração entre os membros.

----

# Descrição

O sistema funciona a partir da interação do usuário com um bot no Telegram. Dependendo do tipo de conteúdo enviado (texto, imagem ou áudio), o bot direciona a entrada para o módulo correspondente, que realiza o processamento necessário e retorna uma resposta ao usuário.

O projeto foi dividido em notebooks distintos, cada um responsável por uma funcionalidade específica, facilitando o desenvolvimento colaborativo e a compreensão do funcionamento geral do sistema.

----

# Metodologia

A metodologia adotada no projeto baseia-se no desenvolvimento incremental e modular, permitindo a validação gradual das funcionalidades implementadas. As principais etapas foram:

Planejamento do sistema: definição do escopo do projeto, identificação das funcionalidades principais e divisão do sistema em módulos independentes.

Estruturação modular: separação do código em notebooks distintos, cada um responsável por uma tarefa específica (bot, imagem, áudio e código auxiliar).

Implementação orientada a objetos: utilização de classes, herança e polimorfismo, especialmente no módulo de áudio, visando reutilização de código e facilidade de expansão.

Integração com APIs externas: conexão com a API do Telegram para recepção e envio de mensagens.

Aplicação de técnicas de IA: uso de modelos pré-treinados (yolov8n.pt) para reconhecimento de objetos em imagens e processamento de sinais de áudio.

Testes e validação: execução contínua do sistema para verificar o correto funcionamento da comunicação entre os módulos.

----

