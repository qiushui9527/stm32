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
    BEEP_Init();//��������ʼ�����͵�ƽ��Ч
	LED_Init();//LED��ʼ�����͵�ƽ��Ч
	KEY_Init();//������ʼ��������1�ߵ�ƽ��Ч��2.3.4�����͵�ƽ��Ч
	GPIOF->ODR |=1<<6;
	GPIOF->ODR |=1<<9;  
	GPIOF->ODR |=1<<10;
	GPIOC->ODR |=1<<0;
	while(1)
	{
//         ����
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
//           ��ˮ��
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
//          ������
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

