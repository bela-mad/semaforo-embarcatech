#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

// Defines
#define RED_LED_PIN 11
#define YELLOW_LED_PIN 12
#define GREEN_LED_PIN 13

// Declaração de variável e vetor globais 
uint8_t led_pin[3] = {RED_LED_PIN, YELLOW_LED_PIN, GREEN_LED_PIN};
uint8_t led_atual = 0;

// Cabeçalho das funções
bool repeating_timer_callback(struct repeating_timer *t);
void led_init(uint gpio);

int main() {

  // Inicialização e configuração dos componentes a serem utilizados
  stdio_init_all();
  led_init(RED_LED_PIN);
  led_init(YELLOW_LED_PIN);
  led_init(GREEN_LED_PIN);

  // Esta estrutura armazenará informações sobre o temporizador configurado
  struct repeating_timer timer;

  // Configura o temporizador para chamar a função de callback a cada 3 segundos
  add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

  while (true) {
    sleep_ms(1000);
    printf("+ 1 segundo...\n");
  }
}

// Funções

// Função de callback do timer
bool repeating_timer_callback(struct repeating_timer *t) {
  // Apaga todos os LEDs antes de trocar de estado
  for (int i = 0; i < 3; i++) {
    gpio_put(led_pin[i], 0);
  }
  // Liga o LED correspondente ao estado atual
  gpio_put(led_pin[led_atual], 1);

  // Loop para imprimir mensagem de acordo com o pino ativado
  switch (led_atual) {

  // LED vermelho
  case 0:
    printf("Sinal vermelho, pare!\n");
    break;
  
  // LED amarelo
  case 1:
    printf("Sinal amarelo, melhor desacelerar!\n");
    break;

  // LED verde
  case 2:
    printf("Sinal verde, siga em frente!\n");
    break;

  default:
    break;
  }

  // Atualiza o estado atual (avança para o próximo estado)
  // Esse cálculo mantém o valor de led_atual sempre como 0, 1 ou 2
  led_atual = (led_atual + 1) % 3;

  return true; // Mantém o timer repetindo
}

// Função que inicializa o pino do LED e configura como saída
void led_init(uint gpio) {
  gpio_init(gpio);
  gpio_set_dir(gpio, GPIO_OUT);
}