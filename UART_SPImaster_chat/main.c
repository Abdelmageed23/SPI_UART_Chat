/*
 * main.c
 *
 *  Created on: Jan 25, 2022
 *      Author: Abdelrahman Mohamed
 */

#include "LIB/BIT_MATH.h"
#include "LIB/STD_TYPES.h"

#include "MCAL/UART/UART_Interface.h"
#include "MCAL/SPI/SPI_Interface.h"
#include "APP/APP.h"


int main(void)
{
	APP_Init();

    while (1)
    {
    	APP_run();
	}
	return 0;
}
