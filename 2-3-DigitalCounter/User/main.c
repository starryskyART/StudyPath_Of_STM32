#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "DigitalCounter.h"


int main(void)
{
	OLED_Init();
	DigitalCounterInit();
	OLED_ShowString(1, 1, "Count:");
	while(1)
	{
		OLED_ShowNum(1, 7, CounterSensor_Get(), 5);
	}	
}
