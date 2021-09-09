#include "stm32f4xx.h" 
#include "led.h"	
#include "bitband_cm4.h"	
/***************************
*��������LED_Init
*��  �ܣ�LED��ʼ��
*��  ������
*����ֵ����
****************************/
void LED_Init(void)
{
    RCC->AHB1ENR|=1<<5;//ʹ��PFʱ��
	RCC->AHB1ENR|=1<<2;//ʹ��PCʱ��
	//PF6
	GPIOF->MODER &=~(3<<(2*6));//12��13λ����
	GPIOF->MODER|=1<<(2*6);//12λд��1
	//PF9
	GPIOF->MODER &=~(3<<(2*9));//18��19λ����
	GPIOF->MODER|=1<<(2*9);//18λд��1
	//PF10
	GPIOF->MODER &=~(3<<(2*10));//20��21λ����
	GPIOF->MODER|=1<<(2*10);//20λд��1
	//PC0
	GPIOC->MODER &=~(3<<(2*0));//0��1λ����
	GPIOC->MODER|=1<<(2*0);//0λд��1
}
