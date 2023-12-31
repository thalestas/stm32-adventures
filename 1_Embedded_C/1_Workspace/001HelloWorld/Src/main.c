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
#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	printf("Tambaqui e' top!\n");
	printf("Size of char: %u\n", sizeof(char));
	printf("Size if int: %u\n", sizeof(int));
	printf("Size if long: %u\n", sizeof(long));
	printf("Size if long long: %u\n", sizeof(long long));
	printf("Size if double: %u\n", sizeof(double));
	printf("Size if float: %u\n", sizeof(float));
	/* Loop forever */
	for(;;);
}
