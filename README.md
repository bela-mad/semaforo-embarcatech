<samp>
<h1 align="center"> Semáforo :vertical_traffic_light: </h1>
  
<h2 align="center"> Sobre :pencil: </h2>

<p align="justify"> &emsp;&emsp;&emsp;&emsp; Repositório com o objetivo de consolidar a compreensão dos conceitos relacionados ao uso de clock e temporizadores no microcontrolador RP2040 e explorar as funcionalidades da placa de desenvolvimento BitDogLab, como parte de uma tarefa desenvolvida na Unidade 4 do Capítulo 4 da EmbarcaTech, residência de Sistemas Embarcados. Essa tarefa foi desenvolvida pela residente Isabela Madureira.

<h3> Descrição da tarefa </h3>

<p align="justify"> &emsp;&emsp;&emsp;&emsp; A tarefa consiste em utilizar os seguintes componentes:

  1. Microcontrolador Raspberry Pi Pico W;
  2. 03 LEDs (vermelho, amarelo e verde);
  3. 03 Resistores de 330 Ω.

 &emsp;&emsp;&emsp;&emsp; O programa deve possuir as seguintes funcionalidades:

<p align="justify">  1. O acionamento dos LEDs (sinais do semáforo) deve iniciar na cor vermelha, alterando para amarela e, em seguida, verde; </p>
<p align="justify">  2. O temporizador deve ser ajustado para um atraso de 3 segundos (3.000ms); </p>
<p align="justify">  3. A mudança de estado dos LEDs deve ser implementa na função de call-back do temporizador, a exemplo da rotina trabalhada na aula síncrona - repeating_timer_callback(); </p>
<p align="justify">  4. A rotina principal, presente no interior da estrutura de repetição while, deve imprimir algum tipo de informação a cada segundo (1.000 ms) - a mensagem enviada pela porta serial fica a critério do discente. </p>
<p align="justify">  5. Com o emprego da Ferramenta Educacional BitDogLab, faça um experimento com o código deste exercício utilizando o LED RGB – GPIOs 11, 12 e 13. </p>

<h3> Estruturação dos Arquivos </h3>

<p align="justify"> &emsp;&emsp;&emsp;&emsp; O projeto é composto pelos arquivos comuns a um projeto Pico W, além de uma pasta chamada 'wokwi', com os arquivos diagram.json e wokwi.toml (para a simulação no Wokwi) e os arquivos semaforo-embarcatech.c (que gerencia todo o projeto) e READ.ME (descrição do projeto).

<h2></h2>
<h2 align="center"> Como utilizar :computer_mouse: </h2>

<p align="justify"> &emsp;&emsp;&emsp;&emsp; Para utilizar o programa, o usuário deve:

- Clonar o repositório em uma pasta separada para recebê-lo;
- Abrir o projeto no VS Code, importando-o pela extensão Raspberry Pi Pico;
- Abrir o arquivo diagram.json para usar o simulador Wokwi;
- Executar a simulação.

</samp>
