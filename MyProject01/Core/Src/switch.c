/*
 * switch.c
 *
 *  Created on: Oct 11, 2022
 *      Author: mss33
 */


#include "main.h"

__weak void onClick(int n){
	UNUSED(n);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin){
	switch(GPIO_Pin){
	case GPIO_PIN_0:
		onClick(1);
		break;
	case GPIO_PIN_1:
			onClick(2);
			break;
	case GPIO_PIN_2:
			onClick(3);
			break;
	case GPIO_PIN_3:
			onClick(4);
			break;

	}
}
