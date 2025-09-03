# Projeto de Controle com Microcontrolador

## Descrição
Este projeto foi desenvolvido como parte de um desafio de hardware.
O objetivo é criar um sistema embarcado capaz de:
* Receber um sinal externo de 12 V ativo em nível baixo.
* Acionar um motor DC 5 V / 1 A por 10 segundos.
* Enviar mensagens de status via UART RS232.
* Ser alimentado por uma fonte de 9 a 24 VDC, com proteções contra inversão de polaridade e surtos.

## Especificações de Hardware
* Microcontrolador: ATmega328P + botão de reset.
* Fonte de alimentação: regulador LM2596 (9–24 VDC para 5 V).
* Motor: 5 V / 1 A, acionado via MOSFET canal N, com fusível de proteção.
* Proteções:
  * Fusível resetável (PTC).
  * Diodo Schottky (SS34).
  * Diodo TVS (SMBJ33A).
* Interface de entrada: optoacoplador para isolamento do sinal de 12 V.
* Comunicação serial: MAX3232 para RS232.
* Sinalização de placa energizada: LED

## Firmware
O firmware em C/C++ (pronto para compilação no ARDUINO IDE) realiza:
1. Leitura do sinal externo via optoacoplador.
2. Acionamento do motor por 10 segundos.
3. Envio de mensagens de status na UART.

## Arquivos Gerados
* Esquemático em PDF.
* PCB desenhada no KiCad 9.
* Arquivos Gerber e Drill files para fabricação.
* Pick and Place (PnP) para montagem.
* BOM (Bill of Materials) para compra dos componentes.
* Arquivos de projeto editáveis da placa e esquematico (.kicad_pcd e _sch)

## Como usar
1. Alimente a placa com 9 a 24 VDC no conector J1 (pino interno VCC e externo GND) através de fonte externa;
2. Conecte o sinal externo de 12 V no borne J3 (pino 1 : GND, pino 2 : 12V) para habilitação do motor;
3. Conecte o motor DC 5 V / 1 A no borne J4 (pino 1 : +, pino 2 : GND);
4. Utilize a porta RS232 (Conector db9 J2) para monitorar as mensagens do sistema.

## Tecnologias Utilizadas
* KiCad 9 → desenvolvimento do esquemático e PCB.
* Arduino IDE → programação do microcontrolador.

## Autor
Projeto desenvolvido por Pedro Henrique Ramos, Engenheiro de Controle e Automação e técnico em eletroeletrônica.
