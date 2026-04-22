#include "stm32f10x.h"                  // Device header


void DigitalCounterInit(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	GPIO_InitTypeDef GPIO_InitStruction;
	GPIO_InitStruction.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_InitStruction.GPIO_Pin = GPIO_Pin_14;
	GPIO_InitStruction.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStruction);
}

uint8_t Get_CountNum(void)
{
	return GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_14);
}
