#ifndef __MAIN_H
#define __MAIN_H
#ifdef __cplusplus
extern "C" {
#endif
#include "stm32f4xx_hal.h"
void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);
void Error_Handler(void);
#define przycisk_Pin GPIO_PIN_0
#define przycisk_GPIO_Port GPIOA
#define green_Pin GPIO_PIN_12
#define green_GPIO_Port GPIOD
#define orange_Pin GPIO_PIN_13
#define orange_GPIO_Port GPIOD
#define red_Pin GPIO_PIN_14
#define red_GPIO_Port GPIOD
#define blue_Pin GPIO_PIN_15
#define blue_GPIO_Port GPIOD
#define TRIG_PIN GPIO_PIN_10
#define TRIG_PORT GPIOA
#define ECHO_PIN GPIO_PIN_8
#define ECHO_PORT GPIOA
#ifdef __cplusplus
}
#endif
#endif
