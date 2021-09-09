#ifndef _KEY_H
#define _KEY_H
#include "stm32f4xx.h"
#include "bitband_cm4.h"
#define KEY_OFF4  PEin(4)=1;
#define KEY_ON4   PEin(4)=0;

#define KEY_OFF3  PEin(3)=1;
#define KEY_ON3   PEin(3)=0;

#define KEY_OFF2  PEin(2)=1;
#define KEY_ON2   PEin(2)=0;

#define KEY_OFF1  PAin(0)=0;
#define KEY_ON1   PAin(0)=1;
void KEY_Init(void);
#endif
