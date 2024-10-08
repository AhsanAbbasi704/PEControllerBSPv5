/**
 ********************************************************************************
 * @file    	screen_main_app.c
 * @author 		Waqas Ehsan Butt
 * @date    	May 23, 2023
 *
 * @brief   
 ********************************************************************************
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

/********************************************************************************
 * Includes
 *******************************************************************************/
#include "screen_main_app.h"
#include "shared_memory.h"
#include "data_config.h"
/********************************************************************************
 * Defines
 *******************************************************************************/

/********************************************************************************
 * Typedefs
 *******************************************************************************/

/********************************************************************************
 * Structures
 *******************************************************************************/

/********************************************************************************
 * Static Variables
 *******************************************************************************/
/**
 * @brief Collection of data parameters representing the controllable parameters.
 */
data_param_info_t* mainScreenControlConfs[CONTROL_CONFS_COUNT] =
{
		&p2pCommsParams[P2P_PARAM_f_REQ_INV1],
		&p2pCommsParams[P2P_PARAM_DIR_REQ_INV1],
		&p2pCommsParams[P2P_PARAM_EN_INV1],
		&p2pCommsParams[P2P_PARAM_f_REQ_INV2],
		&p2pCommsParams[P2P_PARAM_DIR_REQ_INV2],
		&p2pCommsParams[P2P_PARAM_EN_INV2],
};
/**
 * @brief Collection of data parameters representing the monitored parameters.
 */
data_param_info_t* mainScreenMonitorConfs[MONITOR_CONFS_COUNT] =
{
		&p2pCommsParams[P2P_PARAM_f_INV1],
		&p2pCommsParams[P2P_PARAM_a_INV1],
		&p2pCommsParams[P2P_PARAM_m_INV1],
		&p2pCommsParams[P2P_PARAM_f_INV2],
		&p2pCommsParams[P2P_PARAM_a_INV2],
		&p2pCommsParams[P2P_PARAM_m_INV2],
};
/********************************************************************************
 * Global Variables
 *******************************************************************************/

/********************************************************************************
 * Function Prototypes
 *******************************************************************************/

/********************************************************************************
 * Code
 *******************************************************************************/

/* EOF */
