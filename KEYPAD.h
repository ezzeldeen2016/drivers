/*
 * KEYPAD.h
 *
 * Created: 3/27/2020 9:25:35 AM
 *  Author: BS
 */ 


#ifndef KEYPAD_H_
#define KEYPAD_H_
#include "GPIO.h"
#include <util/delay.h>
#define F_CPU 1000000UL
#define keypadport D
#define bin1 0
#define bin2 1
#define bin3 2
#define binA 3
#define binB 4
#define binC 5
#define binD 6
void keypad_init();
char keypad_read();
char scan();

#endif /* KEYPAD_H_ */