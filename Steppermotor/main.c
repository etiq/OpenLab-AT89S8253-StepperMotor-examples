/*  Name     : main.c
 *  Purpose  : Main file for generating pwm using AT89S8253 vary dutycle thus control the speed of motor
 *  Author   : Etiq Technologies
 *  Date     : 25/04/2016 
 *  Revision : None
 */
#include <REG8253.H>
#include "delay.h"

int main(void)
{       //portD configured as output
	/*values for step wise rotation are loaded into PORTD in a continous while loop*/
    while(1) 
    {
		P3=0x01;
		delay_ms(1000);
		P3=0x04;
		delay_ms(1000);
		P3=0x02;
		delay_ms(1000);
		P3=0x08;
		delay_ms(1000);
    }
}

