/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32f4xx_it.h
  * @brief   This file contains the headers of the interrupt handlers.
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

/* Prevents the file from being included more than once */
#ifndef __STM32F4xx_IT_H
#define __STM32F4xx_IT_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes user-defined or peripheral-specific headers (currently empty) */
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* User-defined exported types (currently empty) */
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* User-defined exported constants (currently empty) */
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* User-defined exported macros (currently empty) */
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Function prototypes for system exception and interrupt handlers */
/* These are called automatically by the CPU on various exception events */

void NMI_Handler(void);             // Non-Maskable Interrupt — used for critical events like power failures
void HardFault_Handler(void);       // Hard Fault — triggered by illegal memory access or system crash
void MemManage_Handler(void);       // Memory Management Fault — related to MPU (Memory Protection Unit) errors
void BusFault_Handler(void);        // Bus Fault — issues with memory access on the bus
void UsageFault_Handler(void);      // Usage Fault — triggered by illegal instructions or division by zero
void SVC_Handler(void);             // Supervisor Call (SVC) — used for OS-level function calls in RTOS
void DebugMon_Handler(void);        // Debug Monitor — useful for debugging tools
void PendSV_Handler(void);          // Pendable Service Call — typically used in context switching (RTOS)
void SysTick_Handler(void);         // System Tick — usually triggers every 1ms, used for delays and scheduling

void CAN1_RX0_IRQHandler(void);     // Interrupt for CAN1 RX FIFO 0 (when CAN message is received)

/* USER CODE BEGIN EFP */
/* User-defined exported function prototypes (empty placeholder) */
/* USER CODE END EFP */

#ifdef __cplusplus
}
#endif

#endif /* __STM32F4xx_IT_H */  // End of include guard
