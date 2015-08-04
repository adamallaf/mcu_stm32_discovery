/**
* @file				Delay.c
* @Author			Adam Allaf
* @version  	01.00
* @date				04-08-2015
* @brief			STM32F100-discovery demo project
*/

#include "Delay.h"

extern volatile uint32_t delay;

/*****************************************************************************
** Function name:		Delay_ms
**
** Descriptions:		Pauses the program for the amount of time (in miliseconds)
**									specified as parameter.
**
** parameter:			mSeconds
**
*****************************************************************************/
void Delay_ms(uint32_t mSeconds){
		delay = 0;
		while(delay < mSeconds);
}