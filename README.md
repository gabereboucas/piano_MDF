# Projeto de Piano com Botões e Alto-falante  🎹🎶

Este é um projeto simples que utiliza botões e um Alto-falante para criar um piano básico. Cada botão está associado a uma nota musical, e quando pressionado, o buzzer emite o som correspondente.
Este som saindo na placa soldada

## Componentes Necessários

- Arduino Nano
- 14 botões 
- 1 Alto-falante
- Jumpers e protoboard (para conexões)
- Resistores (para os botões)

## Esquema de Conexão

- Conecte cada botão a um pino digital do Arduino (pinos 0 a 13 no exemplo).
- Conecte o terminal positivo do alto-falante ao pino 10 do Arduino e o terminal negativo ao GND.

## Código

O código principal do projeto está no arquivo `piano.ino`. Ele utiliza a biblioteca `EduIntro.h` para facilitar a leitura dos botões e o controle do buzzer.

### Estrutura do Código

- **Botões**: Cada botão é inicializado com um pino específico (0 a 13).
- **Buzzer**: O buzzer é inicializado no pino 10.
- **Loop**: No loop principal, o código verifica se cada botão foi pressionado ou liberado e toca a nota correspondente no buzzer.

## Como Usar

1. **Carregue o Código**: Conecte o Arduino ao computador e carregue o código `piano.ino` usando a IDE do Arduino.
2. **Pressione os Botões**: Cada botão está associado a uma nota musical. Pressione os botões para tocar as notas correspondentes.
3. **Experimente**: Você pode modificar as notas ou adicionar mais botões para expandir o piano.

## Bibliotecas Utilizadas

- **EduIntro.h**: Biblioteca que simplifica a interação com componentes eletrônicos no Arduino, como botões e buzzers.

