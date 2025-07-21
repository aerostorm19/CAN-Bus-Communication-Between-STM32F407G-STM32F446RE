/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header file for main.c. Contains common application defines.
  ******************************************************************************
  * @attention
  * © 2024 STMicroelectronics.
  * Licensed under the terms in the LICENSE file (or provided AS-IS).
  ******************************************************************************
  */
/* USER CODE END Header */

/* Prevents recursive inclusion — avoids double inclusion of this header */
#ifndef __MAIN_H
#define __MAIN_H

/* Ensures compatibility with C++ compilers by using C linkage */
#ifdef __cplusplus
extern "C" {
#endif

/* STM32 HAL library header for the F4 series — provides low-level access */
#include "stm32f4xx_hal.h"

/* USER CODE BEGIN Includes */
// (Place any additional custom header includes here)
/* USER CODE END Includes */

/* USER CODE BEGIN ET */
// Exported types (add typedef structs/enums here)
/* USER CODE END ET */

/* USER CODE BEGIN EC */
// Exported constants (define project-wide constants here)
/* USER CODE END EC */

/* USER CODE BEGIN EM */
// Exported macros (add handy macros like conversions, bit manipulation, etc.)
/* USER CODE END EM */

/* Prototypes of exported functions */
void Error_Handler(void); // Called when an error occurs in the system

/* USER CODE BEGIN EFP */
// Add your custom function prototypes here
/* USER CODE END EFP */

/* GPIO pin mappings for onboard peripherals */
#define B1_Pin GPIO_PIN_13         // Push button B1 on PC13
#define B1_GPIO_Port GPIOC         // GPIO port C

#define USART_TX_Pin GPIO_PIN_2    // UART transmit pin on PA2
#define USART_TX_GPIO_Port GPIOA   // GPIO port A

#define USART_RX_Pin GPIO_PIN_3    // UART receive pin on PA3
#define USART_RX_GPIO_Port GPIOA   // GPIO port A

#define LD2_Pin GPIO_PIN_5         // Onboard LED (usually green) on PA5
#define LD2_GPIO_Port GPIOA        // GPIO port A

#define TMS_Pin GPIO_PIN_13        // JTAG TMS pin for debugging on PA13
#define TMS_GPIO_Port GPIOA        // GPIO port A

#define TCK_Pin GPIO_PIN_14        // JTAG TCK pin for debugging on PA14
#define TCK_GPIO_Port GPIOA        // GPIO port A

#define SWO_Pin GPIO_PIN_3         // Serial Wire Output (SWO) for debugging
#define SWO_GPIO_Port GPIOB        // GPIO port B

/* USER CODE BEGIN Private defines */
// Add any #defines for private/internal use only here
/* USER CODE END Private defines */

/* Restore C++ compatibility */
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
