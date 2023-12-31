/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	uint32_t *const AHB1ENR 	= (uint32_t*) 0x40023830;
	uint32_t *const PORTA_DIR 	= (uint32_t*) 0x40020000;
	volatile uint32_t *const PORTA_OUT	= (uint32_t*) 0x40020014;
	uint32_t *const PORTC_DIR 	= (uint32_t*) 0x40020800;
	volatile uint32_t *const PORTC_IN	= (uint32_t*) 0x40020810;

	//Enable PA and PC clock
	*AHB1ENR |= (5 << 0);
	//Set PA as output
	*PORTA_DIR |= (1 << 10);
	//Set PC as input
	*PORTC_DIR &= ~(3<<0);
	//Set PA5 to high
	*PORTA_OUT |= (1 << 5);

	while(1) {
		if(*PORTC_IN & (1<<10))
			*PORTA_OUT &= ~(1 << 5);
		else
			*PORTA_OUT |= (1 << 5);
	}
}
