/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H               // Prevent multiple inclusion of this header file
#define __MAIN_H

#ifdef __cplusplus
extern "C" {                   // Ensure compatibility with C++ compilers
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"     // HAL (Hardware Abstraction Layer) header for STM32F4 series

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
// You can include additional headers here (e.g., sensor libraries, custom drivers)
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
// Define any user-specific types, structs, or enums here
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
// Define application-wide constants (e.g., thresholds, limits)
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
// Define helper macros here (e.g., bit manipulation macros)
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);      // Function to handle system errors, like HAL failure or assertion

/* USER CODE BEGIN EFP */
// Export any additional function prototypes you might add later
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
// These macros define pin numbers and corresponding ports used in the project

#define B1_Pin GPIO_PIN_13         // User push-button connected to PC13 (blue button on Nucleo board)
#define B1_GPIO_Port GPIOC         // GPIO port for button B1

#define USART_TX_Pin GPIO_PIN_2    // UART transmission pin (PA2)
#define USART_TX_GPIO_Port GPIOA   // GPIO port for USART TX

#define USART_RX_Pin GPIO_PIN_3    // UART reception pin (PA3)
#define USART_RX_GPIO_Port GPIOA   // GPIO port for USART RX

#define LD2_Pin GPIO_PIN_5         // On-board user LED (typically green LED on PA5)
#define LD2_GPIO_Port GPIOA        // GPIO port for LED

#define TMS_Pin GPIO_PIN_13        // TMS (JTAG/SWD debug interface pin) - PA13
#define TMS_GPIO_Port GPIOA        // Port for TMS

#define TCK_Pin GPIO_PIN_14        // TCK (JTAG/SWD clock) - PA14
#define TCK_GPIO_Port GPIOA        // Port for TCK

#define SWO_Pin GPIO_PIN_3         // Serial Wire Output for debugging (PB3)
#define SWO_GPIO_Port GPIOB        // GPIO port for SWO

/* USER CODE BEGIN Private defines */
// You can define more private macros or pin mappings here
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
