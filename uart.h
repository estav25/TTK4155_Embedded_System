/*
 * uart.h
 *
 * Created: 26.08.2015 16:00:58
 *  Author: Administrator
 */ 


void UART_Init(void);
void UART_Transmit(unsigned char data);
unsigned char UART_Receive(void);