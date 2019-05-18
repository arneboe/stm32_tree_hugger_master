#include "stm32f1xx_hal.h"
#include "gpio.h"
#include "usart.h"
#include "tim.h"

extern "C" {
void SystemClock_Config();
}

const int MASTER_BIN = 142; //=1386,71875 HZ //FIXME does this include index zero?


int main() {
    SystemClock_Config();

    HAL_Init();
    MX_GPIO_Init();
    MX_USART1_UART_Init();
    MX_TIM2_Init();

    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);

    printf("started\n");

    while(true){}
}
