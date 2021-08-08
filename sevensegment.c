/*
 * sevensegment.c
 *
 *  Created on: 15/02/2021
 *      Author: Muhab
 */
#include "StdTypes.h"
#include "Dio.h"
#include "sevensegment.h"
#include <avr/delay.h>
u8 array1[10] = { 63, 6, 91, 79, 102, 109, 125, 7, 127, 111 }; //Numbers from 0 to 9
/****************************** Function to initialize 7-Segment ******************************/
void Segment_vidInit(void) {
	DIO_vidSetPortDir(SEG_P1, 0xff);
#if (BCD_CHIP==DISABLE)
	DIO_vidSetPortDir(SEG_P2, 0xff);
#endif
}
/****************************** Function to display number on 7-Segment ******************************/
StdErr_t Segment_enuDisplay(u8 num) {
	u8 num1, num2;
	if (99 >= num) { // check condition of valid number
		num1 = num / 10;
		num2 = num % 10;
#if (BCD_CHIP==DISABLE) //check if there is a BCD_CHIP connected
		DIO_vidWriteOnPort(SEG_P1, array1[num1]);
		DIO_vidWriteOnPort(SEG_P2, array1[num2]);
		return Err_ok; //return 1 if ok
#endif
		DIO_vidWriteOnPort(SEG_P1, num1);
		_delay_ms(5);
		DIO_vidWriteOnPort(SEG_P2, num2);
		return Err_ok;
	}
	return Err_INN_IN;

}
