
#include "application/app.h"
#include <util/delay.h>
#define F_CPU   1000000u
int main(void)
{
	LCD_INIT();
	
	I2C_init(I2C_PRESCALER_1);
	
	TIMER_0_init(NORMAL_MODE);
	uint8_t STR_Term[16]={1,2,3,4,5,6,7,8,9,9,8,7,6,5,2,2},STR_REad[4]={1,2,3,4},ad=0x00,ad2=0x10,flag=0,str1[21]={0},str2[16]={0},ad3=0b1010000,ad4=0b1010001;
	
	if (flag==0)
	{
		EEPROM_Write_WithSize(STR_Term,&ad,16);
		_delay_ms(100);
		EEPROM_Write_WithSize(STR_REad,&ad2,4);

	}

			EEPROM_Read_String(str1);

    while (1) 
    {
    }
}

