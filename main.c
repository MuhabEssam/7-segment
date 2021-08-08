/*
 * main.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: Fannan
 */
#include "StdTypes.h"
#include "Dio.h"
#include "sevensegment.h"
#include <avr/delay.h>
int main() {
	Segment_vidInit();
	while(1){

		Segment_enuDisplay(10);
	}
	return 0;
		}
