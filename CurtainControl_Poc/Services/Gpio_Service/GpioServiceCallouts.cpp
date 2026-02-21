extern "C"
{
#include "ComponentCallouts/CalloutsGpioService.h"
}

#include "GpioService.hpp"

extern "C"
{
    void gpioService10sCallout(void)
    {
        gpioServiceHandle10s();
    }
}