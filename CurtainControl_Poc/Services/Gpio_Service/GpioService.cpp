#include "GpioService.hpp"
extern "C"
{
#include "stm32wbxx_hal.h"
#include "stm32wb55xx.h"
}

#define Test_Pin_Pin GPIO_PIN_8
#define Test_Pin_GPIO_Port GPIOB

GPIO_PinState pinLevel = GPIO_PIN_RESET;

void gpioServiceHandle()
{
    HAL_GPIO_WritePin(Test_Pin_GPIO_Port, Test_Pin_Pin, pinLevel);
}

extern "C"
{
    void gpioService10sCallout(void)
    {
        gpioServiceHandle();
    }
}