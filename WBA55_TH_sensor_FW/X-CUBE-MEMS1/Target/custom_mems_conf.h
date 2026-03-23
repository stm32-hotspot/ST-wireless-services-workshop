/**
  ******************************************************************************
  * @file    custom_mems_conf.h
  * @author  MEMS Software Solutions Team
  * @brief   This file contains definitions of the MEMS components bus interfaces for custom boards
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef CUSTOM_MEMS_CONF_H
#define CUSTOM_MEMS_CONF_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32wbaxx_hal.h"
#include "custom_bus.h"
#include "custom_errno.h"

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

#define USE_CUSTOM_ENV_SENSOR_SHT40AD1B_0         0U

#define CUSTOM_SHT40AD1B_0_I2C_INIT BSP_I2C1_Init
#define CUSTOM_SHT40AD1B_0_I2C_DEINIT BSP_I2C1_DeInit
#define CUSTOM_SHT40AD1B_0_I2C_READ BSP_I2C1_Recv
#define CUSTOM_SHT40AD1B_0_I2C_WRITE BSP_I2C1_Send

#ifdef __cplusplus
}
#endif

#endif /* CUSTOM_MEMS_CONF_H*/
