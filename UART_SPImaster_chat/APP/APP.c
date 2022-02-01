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

/**MASTER**/
void APP_Init()
	{
		UART_Init();
		SPI_MasterInit();
		UART_SendString("Master\r\n");
	}

void APP_run()
	{
		uint8_t string[255];
		UART_ReceiveString(string);						//Receiving a string
		UART_SendString(string);						//Echo for check in master
		SPI_MasterTransmitString(string);				//Send to SPI
		UART_SendString("\r\n");							//Newline
	}


