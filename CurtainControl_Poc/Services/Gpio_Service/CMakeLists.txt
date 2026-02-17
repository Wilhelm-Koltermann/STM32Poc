set(service gpioService)

add_library(${service} STATIC GpioService.cpp)

target_include_directories(${service} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${service} PRIVATE stm32cubemx)