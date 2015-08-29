/*
 * uart.c
 *
 * Created: 26.08.2015 10:51:53
 *  Author: Administrator
 */ 

#include <avr/io.h>
#include <stdint.h>
#include "uart.h"

void UART_Init()
{	
	unsigned int ubrr = 31;
    UBRR0H = (unsigned char)(ubrr>>8);
	UBRR0L = (unsigned char)ubrr;
	
	UCSR0B = (1 << RXEN0)|(1 << TXEN0);
	//UCSR0C = (1 << URSEL0)|(0 << USBS0)|(1 << UCSZ00)|(1 << UCSZ01);
}

void UART_Transmit(unsigned char data)
{
	while( !( UCSR0A & (1 << UDRE0)));
	UDR0 = data;
}

unsigned char UART_Receive(void)
{
	while( !(UCSR0A & (1<<RXC0)));
	return UDR0;
}

//testttttttttttt