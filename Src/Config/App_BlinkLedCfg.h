/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  App_BlinkLedCfg.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef APP_BLINK_LED_CFG_H
#define APP_BLINK_LED_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define	APP_INTERRUPT_HANDLER					NVIC_TIMER0A
#define APP_TIMER_ON_DURATION					1UL
#define APP_TIMER_OFF_DURATION				1UL
#define APP_TIMER_BLOCK								GPTM_TIMER_0_ID
#define APP_TIMER_ID									GPTM_TIMER_A
#define	APP_TIMER_CONFIGURATION				GPTM_CONCATENATED
#define APP_TIMER_MODE								PERIODIC
#define APP_TIMER_START_VALUE					(uint32_t)APP_TIMER_OFF_DURATION * SYSTEM_CLOCK_FREQUENCY
#define APP_TIMER_DIRECTION						COUNT_DOWN
#define	APP__LED_INIT_STATE						LED_OFF
#define APP_LED_PORT									GPIO_PORT_F					
#define APP_LED_PIN										GPIO_PIN_1

#define	APP_FN_PTR										blinkLED

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
	void blinkLED(void);
	
 #endif /*APP_BLINK_LED_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: App_BlinkLedCfg.h
 *********************************************************************************************************************/