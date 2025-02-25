/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define Work_LF_Pin GPIO_PIN_0
#define Work_LF_GPIO_Port GPIOC
#define Direction_Right_Front_Pin GPIO_PIN_1
#define Direction_Right_Front_GPIO_Port GPIOC
#define Work_RF_Pin GPIO_PIN_2
#define Work_RF_GPIO_Port GPIOC
#define Work_LR_Pin GPIO_PIN_3
#define Work_LR_GPIO_Port GPIOC
#define ENK_LR_A_Pin GPIO_PIN_0
#define ENK_LR_A_GPIO_Port GPIOA
#define ENK_LR_B_Pin GPIO_PIN_1
#define ENK_LR_B_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define Work_RR_Pin GPIO_PIN_4
#define Work_RR_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define ENK_RF_A_Pin GPIO_PIN_6
#define ENK_RF_A_GPIO_Port GPIOA
#define ENK_RF_B_Pin GPIO_PIN_7
#define ENK_RF_B_GPIO_Port GPIOA
#define Direction_Right_Rear_Pin GPIO_PIN_5
#define Direction_Right_Rear_GPIO_Port GPIOC
#define Direction_Left_Rear_Pin GPIO_PIN_0
#define Direction_Left_Rear_GPIO_Port GPIOB
#define Direction_Left_Front_Pin GPIO_PIN_1
#define Direction_Left_Front_GPIO_Port GPIOB
#define PWM_RR_Pin GPIO_PIN_2
#define PWM_RR_GPIO_Port GPIOB
#define PWM_RF_Pin GPIO_PIN_10
#define PWM_RF_GPIO_Port GPIOB
#define ENK_RR_A_Pin GPIO_PIN_6
#define ENK_RR_A_GPIO_Port GPIOC
#define ENK_RR_B_Pin GPIO_PIN_7
#define ENK_RR_B_GPIO_Port GPIOC
#define ENK_LF_B_Pin GPIO_PIN_8
#define ENK_LF_B_GPIO_Port GPIOA
#define ENK_LF_A_Pin GPIO_PIN_9
#define ENK_LF_A_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define PWM_LF_Pin GPIO_PIN_15
#define PWM_LF_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define PWM_LR_Pin GPIO_PIN_9
#define PWM_LR_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
