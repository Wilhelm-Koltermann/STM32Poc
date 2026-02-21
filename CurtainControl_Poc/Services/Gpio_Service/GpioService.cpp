#include "GpioService.hpp"
extern "C"
{
#include "stm32wbxx_hal.h"
#include "stm32wb55xx.h"
}

#define Test_Pin_Pin GPIO_PIN_8
#define Test_Pin_GPIO_Port GPIOB

void gpioServiceHandle10s()
{
    HAL_GPIO_TogglePin(Test_Pin_GPIO_Port, Test_Pin_Pin);
}