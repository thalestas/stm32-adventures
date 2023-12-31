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
    /* Loop forever */
	//RCC->AHB1RSTR |= (1 << 3);
	//MODER &= (1 << 26);
	//ODR &= (1 << 13);
	uint32_t *ahb1rstr 		= (uint32_t*) 0x40023830;
	uint32_t *porta_dir 	= (uint32_t*) 0x40020000;
	uint32_t *porta 		= (uint32_t*) 0x40020014;

	*ahb1rstr |= (1 << 0);
	*porta_dir |= (1 << 10);
	*porta |= (1 << 5);

	for(;;);
}
