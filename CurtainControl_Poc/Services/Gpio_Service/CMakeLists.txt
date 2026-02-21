set(service gpioService)
set(serviceSources GpioService.cpp GpioServiceCallouts.cpp)

add_library(${service} STATIC)

target_sources(${service} PRIVATE ${serviceSources})

target_link_libraries(${service} PRIVATE stm32cubemx systemCallouts)