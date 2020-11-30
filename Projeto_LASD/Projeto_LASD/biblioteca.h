#define F_CPU 16000000UL
#define BAUD 9600
#define MYUBRR F_CPU/16/BAUD-1
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include "nokia5110.h"


	
// USART	
void USART_Transmit(unsigned char data);
void USART_Init(unsigned int ubrr);
unsigned char USART_Receive(void);


void start_game_config(uint8_t num_dezena, uint8_t num_unidade);
void game_running_display_init();
void game_running_display_config();
void game_running_display_countdwown(uint8_t contador);
