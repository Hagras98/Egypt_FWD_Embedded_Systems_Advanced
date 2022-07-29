/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Led_Interface.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "../../Mcal/Inc/Gpio_Interface.h"
 
/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum{
	LED_OFF,
	LED_ON
}Led_StateType;

typedef struct{
	Gpio_PortType	ledPort;
	Gpio_PinType 	ledPin;
	Led_StateType	initState;
}Led_CfgType;
 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
	void Led_On(Led_CfgType *ledCfg);
	void Led_Off(Led_CfgType *ledCfg);
	void Led_Toggle(Led_CfgType *ledCfg);

 
#endif  /* LED_INTERFACE_H */

/**********************************************************************************************************************
 *  END OF FILE: Led_Interface.h
 *********************************************************************************************************************/