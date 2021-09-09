#include "stm32f4xx.h" 
#include "beep.h"	
/***************************
*函数名：BEEP_Init
*功  能：蜂鸣器初始化
*参  数：无
*返回值：无
*作  者: 李秋水
****************************/
void BEEP_Init(void)
{
      RCC->AHB1ENR|=1<<5;//时钟使能
	  //PF8
	  GPIOF->MODER &=~(3<<(2*8));//16和17位写入0
	  GPIOF->MODER|=1<<(2*8);//16位写入1
}
