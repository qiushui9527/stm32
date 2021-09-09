#include "stm32f4xx.h" 
#include "led.h"	
#include "bitband_cm4.h"	
/***************************
*函数名：LED_Init
*功  能：LED初始化
*参  数：无
*返回值：无
****************************/
void LED_Init(void)
{
    RCC->AHB1ENR|=1<<5;//使能PF时钟
	RCC->AHB1ENR|=1<<2;//使能PC时钟
	//PF6
	GPIOF->MODER &=~(3<<(2*6));//12和13位清零
	GPIOF->MODER|=1<<(2*6);//12位写入1
	//PF9
	GPIOF->MODER &=~(3<<(2*9));//18和19位清零
	GPIOF->MODER|=1<<(2*9);//18位写入1
	//PF10
	GPIOF->MODER &=~(3<<(2*10));//20和21位清零
	GPIOF->MODER|=1<<(2*10);//20位写入1
	//PC0
	GPIOC->MODER &=~(3<<(2*0));//0和1位清零
	GPIOC->MODER|=1<<(2*0);//0位写入1
}
