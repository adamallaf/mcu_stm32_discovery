/**
* @file				IRQ_SysTick.c
* @Author			Adam Allaf
* @version  	01.00
* @date				04-08-2015
* @brief			STM32F100-discovery demo project
*/

#include "stm32f10x.h"                  // Device header

volatile uint32_t ticks;

volatile uint32_t delay;

void SysTick_Handler (void) {	
	ticks++;
	delay++;
}
