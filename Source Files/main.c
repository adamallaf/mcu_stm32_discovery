/**
* @file				main.c
* @Author			Adam Allaf
* @version  	01.00
* @date				04-08-2015
* @brief			STM32F100-discovery demo project
*/

#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(){
	SysTick_Config(SystemCoreClock/1000);
	while(1){
		//Delay_ms(5UL);
	}
	
	/*** Safety routine. DON'T MODIFY THIS CODE!!! ***/
	for(;;);
	
	return 0;
}
