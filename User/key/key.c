#include "stm32f4xx.h" 
#include "key.h"
#include "bitband_cm4.h"
/**********************************************
*函数名：KEY_Init
*功  能：KEY初始化
*参  数：无
*返回值：无
***********************************************/
void KEY_Init(void)
{
      RCC->AHB1ENR |=1<<4;//开PE时钟
	  RCC->AHB1ENR |=1<<0;//开PA时钟
	  //PE4
      GPIOE->MODER &=~(3<<(2*4));//输入模式  按键4
	  GPIOE->PUPDR &=~(3<<(2*4));//无上下拉 浮空输入
	  //PE3
	  GPIOE->MODER &=~(3<<(2*3));//输入模式  按键3
	  GPIOE->PUPDR &=~(3<<(2*3));//无上下拉 浮空输入
	  //PE2
	  GPIOE->MODER &=~(3<<(2*2));//输入模式  按键2
	  GPIOE->PUPDR &=~(3<<(2*2));//无上下拉 浮空输入
	  //PA0
	  GPIOA->MODER &=~(3<<(2*0));//输入模式  按键1
	  GPIOA->PUPDR &=~(3<<(2*0));//无上下拉 浮空输入
}  
