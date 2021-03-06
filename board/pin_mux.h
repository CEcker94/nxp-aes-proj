/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

#include "fsl_gpio.h"

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC1 0x01u         /*!<@brief Selects pin function 1 */
#define IOCON_PIO_INPFILT_OFF 0x0200u /*!<@brief Input filter disabled */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u    /*!<@brief No addition pin function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M4F */

#define PIO22_DIGIMODE_DIGITAL 0x01u  /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO22_FUNC_ALT0 0x00u         /*!<@brief Selects pin function.: Alternative connection 0. */
#define PIO314_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO314_FUNC_ALT0 0x00u        /*!<@brief Selects pin function.: Alternative connection 0. */
#define PIO33_DIGIMODE_DIGITAL 0x01u  /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO33_FUNC_ALT0 0x00u

void BOARD_InitLEDsPins(void); /* Function assigned for the Cortex-M4F */
#define BOARD_LED2_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_LED2_PORT 3U   /*!<@brief PORT device name: 3U */
#define BOARD_LED2_PIN 3U    /*!<@brief 3U pin index: 3 */
                             /* @} */

/*! @name PIO2_2 (coord C3), J9[6]/LED3/P2_2-CT1MAT1-USR_LED3
  @{ */
#define BOARD_LED3_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_LED3_PORT 2U   /*!<@brief PORT device name: 2U */
#define BOARD_LED3_PIN 2U    /*!<@brief 2U pin index: 2 */
                             /* @} */

/*! @name PIO3_14 (coord E3), J13[5]/LED1/P3_14-CT3MAT1-USR_LED1
  @{ */
#define BOARD_LED1_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_LED1_PORT 3U   /*!<@brief PORT device name: 3U */
#define BOARD_LED1_PIN 14U   /*!<@brief 3U pin index: 14 */
                             /* @} */

/*! @name PIO3_20 (coord N2), RE_A
  @{ */
#define BOARD_INITPINS_RE_A_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITPINS_RE_A_PORT 3U   /*!<@brief PORT device name: 3U */
#define BOARD_INITPINS_RE_A_PIN 20U   /*!<@brief 3U pin index: 20 */
                                      /* @} */

/*! @name PIO3_22 (coord N5), RE_B
  @{ */
#define BOARD_INITPINS_RE_B_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITPINS_RE_B_PORT 3U   /*!<@brief PORT device name: 3U */
#define BOARD_INITPINS_RE_B_PIN 22U   /*!<@brief 3U pin index: 22 */
                                      /* @} */

/*! @name PIO3_21 (coord P5), SW
  @{ */
#define BOARD_INITPINS_SW_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITPINS_SW_PORT 3U   /*!<@brief PORT device name: 3U */
#define BOARD_INITPINS_SW_PIN 21U   /*!<@brief 3U pin index: 21 */
                                    /* @} */

/*! @name PIO3_30 (coord K13), USER_SW
  @{ */
#define BOARD_INITPINS_USER_SW_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITPINS_USER_SW_PORT 3U   /*!<@brief PORT device name: 3U */
#define BOARD_INITPINS_USER_SW_PIN 30U   /*!<@brief 3U pin index: 30 */
                                         /* @} */
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO323_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO323_FUNC_ALT1 0x01u
/*!
 * @brief Controls slew rate of I2C pad.: I2C mode. */
#define PIO323_I2CSLEW_I2C_MODE 0x00u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO324_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO324_FUNC_ALT1 0x01u
/*!
 * @brief Controls slew rate of I2C pad.: I2C mode. */
#define PIO324_I2CSLEW_I2C_MODE 0x00u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO32_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 4. */
#define PIO32_FUNC_ALT4 0x04u



#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */





/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
