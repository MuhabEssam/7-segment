/*
 * sevensegment.h
 *
 *  Created on: 15/02/2021
 *      Author: Muhab
 */

#ifndef SEVENSEGMENT_H_
#define SEVENSEGMENT_H_
#define ENABLE 0
#define DISABLE 1
#define BCD_CHIP DISABLE
#define SEG_P1 PC
#if (BCD_CHIP==DISABLE)
#define SEG_P2 PA
#endif
extern void Segment_vidInit(void);
extern StdErr_t Segment_enuDisplay(u8 num);
#endif /* SEVENSEGMENT_H_ */
