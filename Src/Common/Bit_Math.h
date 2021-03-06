/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Bit_Math.h
 *       Module:  -
 *
 *  Description:  header file for register definitions      
 *  
 *********************************************************************************************************************/
#ifndef BIT_MATH_H
#define BIT_MATH_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/*BIT MANIPULATION FUCTION MACROS*/

#define SET_BIT(HW_REG,BIT)						((HW_REG) |= (1<<(BIT)))
#define CLR_BIT(HW_REG,BIT)						((HW_REG) &= ~(1<<(BIT)))
#define WRITE_BIT(HW_REG,BIT,VALUE)		(VALUE > 0 ? SET_BIT(HW_REG,BIT) : CLR_BIT(HW_REG,BIT))
#define TOG_BIT(HW_REG,BIT)						((HW_REG) ^= (1<<(BIT)))
#define GET_BIT(HW_REG,BIT)						(((HW_REG) >> BIT) & 1)
#define SET_GROUP(HW_REG,GROUP)				((HW_REG) |= GROUP)
#define CLR_GROUP(HW_REG,GROUP)				((HW_REG) &= ~GROUP)
#define GET_GROUP(HW_REG,GROUP)				((HW_REG) & GROUP)
#define WRITE_HW_REG(HW_REG,VALUE)		(HW_REG = VALUE)
 
 
 

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


	
#endif  /* BIT_MATH_H */


/**********************************************************************************************************************
 *  END OF FILE: Bit_Math.h
 *********************************************************************************************************************/