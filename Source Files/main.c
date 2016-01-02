/**
* @file				main.c
* @Author			Adam Allaf
* @version  	01.00
* @date				04-08-2015
* @brief			STM32F100-discovery demo project
*/

#include "stm32f10x.h"                  // Device header
#include "stm32f10x_rcc.h"              // Keil::Device:StdPeriph Drivers:RCC
#include "stm32f10x_gpio.h"             // Keil::Device:StdPeriph Drivers:GPIO

#include "Delay.h"

GPIO_InitTypeDef pin_8; 
GPIO_InitTypeDef pin_9;

int main(){
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

	SysTick_Config(SystemCoreClock/1000);

	pin_8.GPIO_Pin = GPIO_Pin_8;
	pin_8.GPIO_Speed = GPIO_Speed_2MHz;
	pin_8.GPIO_Mode = GPIO_Mode_Out_PP;
	pin_9.GPIO_Pin = GPIO_Pin_9;
	pin_9.GPIO_Speed = GPIO_Speed_2MHz;
	pin_9.GPIO_Mode = GPIO_Mode_Out_PP;

	GPIO_Init(GPIOC, &pin_8);
	GPIO_Init(GPIOC, &pin_9);

	while(1){
		GPIO_ResetBits(GPIOC, GPIO_Pin_9);
		GPIO_SetBits(GPIOC, GPIO_Pin_8);
		Delay_ms(500UL);
		GPIO_ResetBits(GPIOC, GPIO_Pin_8);
		GPIO_SetBits(GPIOC, GPIO_Pin_9);
		Delay_ms(500UL);
	}
	
	/*** Safety routine. DON'T MODIFY THIS CODE!!! ***/
	for(;;);
	
	return 0;
}
