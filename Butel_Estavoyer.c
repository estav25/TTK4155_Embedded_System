/*
 * Butel_Estavoyer.c
 *
 * Created: 26.08.2015 10:51:53
 *  Author: Administrator
 */ 

//# define F_CPU 4915200UL

#include <avr/io.h>
#include <stdint.h>
//#include <util/delay.h>
#include "uart.h"

int main(void)
{
	DDRA = 0x01;
	DDRD = 0x02;
	UART_Init();
	unsigned char data = 0x1E;
	
    while(1)
    {
		PORTA |= (1 << PA0);
		//_delay_ms(100);
		//UART_Transmit(data);
		PORTA &= ~(1 << PA0);
		//_delay_ms(100);
	}
}