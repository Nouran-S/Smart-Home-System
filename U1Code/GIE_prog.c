/*
 * GIE_prog.c
 *
 *  Created on: Aug 23, 2023
 *      Author: PC
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GIE_private.h"
#include "GIE_config.h"
#include "GIE_interface.h"

void GIE_vidEnable()
{
	SET_BIT(SREG,SREG_I);
}
void GIE_vidDisable()
{
	CLR_BIT(SREG,SREG_I);
}
