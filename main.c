/*
 * main.c
 *
 *  Created on: 29 Aug 2023
 *      Author: ????
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "STEPPER_interface.h"
#include "STEPPER_config.h"
#include <util/delay.h>
int main(void){
	DIO_VoidSetPortDirection(STEPPER_PORT,255);
	STEPPER_voidSetRotationAngle(1080,CW);
	_delay_ms(1000);
	STEPPER_voidSetRotationAngle(1080, CCW);
}
