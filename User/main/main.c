#include "stm32f4xx.h" 
#include "delay.h"
#include "beep.h"	
#include "led.h"	
#include "key.h"
void delay(u32 t)
{
	while(t--);
}
int main()
{	
	u16 i,j=7000;
    BEEP_Init();//蜂鸣器初始化，低电平有效
	LED_Init();//LED初始化，低电平有效
	KEY_Init();//按键初始化，按键1高点平有效，2.3.4按键低电平有效
	GPIOF->ODR |=1<<6;
	GPIOF->ODR |=1<<9;  
	GPIOF->ODR |=1<<10;
	GPIOC->ODR |=1<<0;
	while(1)
	{
//         按键
//		if(PEin(4)==0)
//		{
//		  GPIOF->ODR &=~(1<<6);
//			GPIOF->ODR &=~(1<<9);
//		}
//		else
//		{
//			GPIOF->ODR |=1<<6;
//			GPIOF->ODR |=1<<9;
//		}
//		if(PEin(3)==0)
//		{
//		  GPIOF->ODR &=~(1<<10);
//			GPIOC->ODR &=~(1<<0);
//		}
//		else
//		{
//			GPIOF->ODR |=1<<10;
//			GPIOC->ODR |=1<<0;
//		}
//		
//		if(PEin(2)==0)
//		{
//		  GPIOF->ODR &=~(1<<6);
//			GPIOC->ODR &=~(1<<0);
//		}
//		else
//		{
//			GPIOF->ODR |=1<<6;
//			GPIOC->ODR |=1<<0;
//		}
//		if(PAin(0)==0)
//		{
//		  GPIOF->ODR |=1<<9;
//			GPIOF->ODR |=1<<10;
//		 }
//		else 
//		{
//			GPIOF->ODR &=~(1<<9);
//			GPIOF->ODR &=~(1<<10);	
//    }
//           流水灯
//		 GPIOF->ODR &=~(1<<6);
//		 delay(5000000);
//		 GPIOF->ODR |=1<<6;
//		 GPIOF->ODR &=~(1<<9);
//		 delay(5000000);
//		 GPIOF->ODR |=1<<9;
//		 GPIOF->ODR &=~(1<<10);
//		 delay(5000000);
//		 GPIOF->ODR|=1<<10;;
//		 GPIOC->ODR &=~(1<<0);
//		 //GPIOF->ODR |=1<<8;
//		 delay(5000000);
//		 GPIOC->ODR|=1<<0;
//		//GPIOF->ODR &=~(1<<8);
//          呼吸灯
		for(i=j;i>0;i--)
		{
			GPIOF->ODR |=1<<6;
			delay(i);
			GPIOF->ODR &=~(1<<6);
			delay(j-i);
		}
		for(i=0;i<j;i++)
		{
			GPIOF->ODR |=1<<6;
			delay(i);
			GPIOF->ODR &=~(1<<6);
			delay(j-i);
		}
	}	
}

