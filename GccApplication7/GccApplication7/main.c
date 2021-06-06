/*
 * GccApplication7.c
 *
 * Created: 01/06/2021 11:40:07
 * Author : Hadeel
 */ 

#include "TC72.h"
#include "SPI.h"
#include <util/delay.h>
int main(void);

int main(void)
{
 
	
	tc72Init();
	_delay_ms(150);
	char MSB=0;
	char LSB =0;
    while (1) 
    {
		tc72_Read(&MSB ,&LSB);
	}
}

