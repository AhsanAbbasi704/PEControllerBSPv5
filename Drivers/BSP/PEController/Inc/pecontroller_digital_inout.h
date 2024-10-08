/**
 ********************************************************************************
 * @file 		pecontroller_digital_inout.h
 * @author 		Waqas Ehsan Butt
 * @date 		September 25, 2021
 *
 * @brief	Controls the digital input / output port of the PEController
 ********************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 Taraz Technologies Pvt. Ltd.</center></h2>
 * <h3><center>All rights reserved.</center></h3>
 *
 * <center>This software component is licensed by Taraz Technologies under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the License. You may obtain
 * a copy of the License at:
 *                        www.opensource.org/licenses/BSD-3-Clause</center>
 *
 ********************************************************************************
 */
#ifndef PECONTROLLER_DIGITAL_INOUT_H
#define PECONTROLLER_DIGITAL_INOUT_H

#ifdef __cplusplus
extern "C" {
#endif
/** @addtogroup BSP
 * @{
 */

/** @addtogroup DigitalPins
 * @{
 */

/** @addtogroup DioPorts Digital Input Output Port
 * @brief Contains the declaration and procedures for the digital input/output pins
 * @details This port can either be input only or output only at a given time.
 * The port direction can be changed by the functions @ref BSP_Dio_SetAsInputPort() and @ref BSP_Dio_SetAsOutputPort().<br>
 * List of functions
 * 	-# <b>@ref BSP_Dio_SetAsIOPin() :</b> Set the Dio pin as GPIO
 * 	-# <b>@ref BSP_Dio_SetPinAlternateFunction() :</b> Selects the Alternate Output Functionality.
 * 													To configure as IO use @ref BSP_Dio_SetAsIOPin()
 * 	-# <b>@ref BSP_Dio_SetAsInputPort() :</b> Set the IO Port as Input. Pin 9 is always output
 * 	-# <b>@ref BSP_Dio_SetAsOutputPort() :</b> Set the IO Port as Output. Pin 9 is always output
 * 	-# <b>@ref BSP_Dio_SetPortValue() :</b> Set the value of output port
 * 	-# <b>@ref BSP_Dio_GetPortValue() :</b> Gets the value of the input port
 * @{
 */
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "pecontroller_digital_pins.h"
/*******************************************************************************
 * Defines
 ******************************************************************************/

/*******************************************************************************
 * Typedefs
 ******************************************************************************/
/** @defgroup DIO_Exported_Typedefs Type Definitions
  * @{
  */
/**
 * @brief Digital IO state definitions
 */
typedef enum
{
	DIO_IN, /**< Define as input pin */
	DIO_OUT,/**< Define as output pin */
} dio_state_t;
/**
 * @}
 */
/*******************************************************************************
 * Structures
 ******************************************************************************/

 /*******************************************************************************
 * Exported Variables
 ******************************************************************************/

/*******************************************************************************
 * Global Function Prototypes
 ******************************************************************************/
/** @defgroup DIO_Exported_Functions Functions
  * @{
  */
/**
 * @brief Set the Dio pin as GPIO
 * @param pinNo Dio Pin No ( Range 1 - 8)
 * @param state State of the pin
 * @return *pin Pointer to the Dio pin structure
 */
extern const digital_pin_t* BSP_Dio_SetAsIOPin(uint32_t pinNo, GPIO_PinState state);
/**
 * @brief Selects the Alternate Output Functionality. To configure as IO use Dio_SetAsIOPin(pinNo, state)
 * @param pinNo Dio pin No (Range 1-16)
 * @param AlternateFunction Alternate Functionality to be used
 * @return *digital_pin_t pointer to the pin structure
 */
extern const digital_pin_t* BSP_Dio_SetPinAlternateFunction(uint32_t pinNo, uint32_t AlternateFunction);
/**
 * @brief Configures a digital input/output pin for PWM (Pulse Width Modulation) functionality.
 *
 * This function sets the specified pin to work in alternate function mode (AF_PP)
 * to support PWM output. The appropriate alternate function for the pin is selected
 * based on the pin number.
 *
 * @param pinNo        The pin number to configure as a PWM pin. This determines
 *                     which alternate function is used for PWM generation.
 *
 * @return const digital_pin_t* Pointer to the initialized digital pin structure.
 *
 * @note The alternate function used for PWM depends on the pin number:
 * - Pins 1 to 6 use `GPIO_AF3_TIM8`.
 * - Pins 7 and 8 use `GPIO_AF1_TIM16`.
 *
 * @warning Ensure that the `pinNo` is within the valid range of available pins
 *          in the `doutPins` array before calling this function.
 */
const digital_pin_t* BSP_Dio_SetAsPWMPin(uint32_t pinNo);
/**
 * @brief Set the IO Port as Input. Pin 9 is always output
 */
extern void BSP_Dio_SetAsInputPort(void);
/**
 * @brief Set the IO Port as Output. Pin 9 is always output
 * @note Initial value for output pin is 0
 */
extern void BSP_Dio_SetAsOutputPort(void);
/*!
 * @brief Set the value of output port
 * @param val- value to be set
 */
extern void BSP_Dio_SetPortValue(uint32_t val);
/*!
 * @brief Gets the value of the input port
 * @returns val- value on the port
 */
extern uint32_t BSP_Dio_GetPortValue(void);
/**
 * @}
 */
/*******************************************************************************
 * Code
 ******************************************************************************/


#ifdef __cplusplus
}
#endif

/**
 * @}
 */

/**
 * @}
 */

/**
 * @}
 */
#endif

/* EOF */
