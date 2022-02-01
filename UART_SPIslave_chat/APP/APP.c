/*
 * APP.c
 *
 *  Created on: Jan 31, 2022
 *      Author: Abdelrahman Mohamed
 */


#include "../LIB/BIT_MATH.h"
#include "../LIB/STD_TYPES.h"
#include "../MCAL/SPI/SPI_Interface.h"
#include "../MCAL/UART/UART_Interface.h"
#include "APP.h"

 /**SLAVE**/
void APP_Init()
	{
		UART_Init();
		SPI_SlaveInit();
		UART_SendString("Slave\r\n");
	}


void APP_run()
	{
		uint8_t string[255];
		SPI_SlaveReceiveString(string);							//Receiving the sting
		UART_SendString(string);								// Send to UART to Display
		UART_SendString("\r");									// Newline
	}


