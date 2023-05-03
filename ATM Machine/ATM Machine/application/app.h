﻿
#ifndef APP_H_
#define APP_H_
/*****************************************************************
					Includes
*****************************************************************/
#include "../MCAL/dio/DIO.h"
#include "../MCAL/Timers/timer.h"
#include "../MCAL/twi/twi.h"
#include "../HAL/eeprom/eeprom.h"
#include "../HAL/keypad/keypad.h"
#include "../HAL/lcd/LCD.h"


/*************************************************************
						PROTOTYPES
**************************************************************/
void CARD_PROGRAMMING_MODE(void);
void CARD_USER_MODE(void);

#endif /* APP_H_ */