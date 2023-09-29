/*
 * STEPPER_program.c
 *
 *  Created on: 29 Aug 2023
 *      Author: ????
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "DIO_register.h"
#include "DIO_private.h"
#include "DIO_config.h"
#include "STEPPER_config.h"
#include<util/delay.h>
void STEPPER_voidSetRotationAngle(u16 Copy_u16Angle, u8 Copy_u8Direction){
	u16 iterations= (Copy_u16Angle/0.703125);
	if(Copy_u8Direction==CW){
	for(u16 i=0;i<iterations;i++){
		DIO_voidSetPinValue(STEPPER_PORT, 0 , DIO_u8HIGH);
		DIO_voidSetPinValue(STEPPER_PORT, 1 , DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_PORT, 2 , DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_PORT, 3 , DIO_u8LOW);
        _delay_ms(2);
        DIO_voidSetPinValue(STEPPER_PORT, 0 , DIO_u8LOW);
        DIO_voidSetPinValue(STEPPER_PORT, 1 , DIO_u8HIGH);
   		DIO_voidSetPinValue(STEPPER_PORT, 2 , DIO_u8LOW);
    	DIO_voidSetPinValue(STEPPER_PORT, 3 , DIO_u8LOW);
        _delay_ms(2);
        DIO_voidSetPinValue(STEPPER_PORT, 0 , DIO_u8LOW);
        DIO_voidSetPinValue(STEPPER_PORT, 1 , DIO_u8LOW);
        DIO_voidSetPinValue(STEPPER_PORT, 2 , DIO_u8HIGH);
        DIO_voidSetPinValue(STEPPER_PORT, 3 , DIO_u8LOW);
        _delay_ms(2);
        DIO_voidSetPinValue(STEPPER_PORT, 0 , DIO_u8LOW);
        DIO_voidSetPinValue(STEPPER_PORT, 1 , DIO_u8LOW);
        DIO_voidSetPinValue(STEPPER_PORT, 2 , DIO_u8LOW);
        DIO_voidSetPinValue(STEPPER_PORT, 3 , DIO_u8HIGH);
        _delay_ms(2);
	}}
	else if(Copy_u8Direction==CCW){
		for(u16 i=0;i<iterations;i++){
			DIO_voidSetPinValue(STEPPER_PORT, 3 , DIO_u8HIGH);
			DIO_voidSetPinValue(STEPPER_PORT, 2 , DIO_u8LOW);
			DIO_voidSetPinValue(STEPPER_PORT, 1 , DIO_u8LOW);
			DIO_voidSetPinValue(STEPPER_PORT, 0 , DIO_u8LOW);
	        _delay_ms(2);
	        DIO_voidSetPinValue(STEPPER_PORT, 3 , DIO_u8LOW);
	        DIO_voidSetPinValue(STEPPER_PORT, 2 , DIO_u8HIGH);
	   		DIO_voidSetPinValue(STEPPER_PORT, 1 , DIO_u8LOW);
	    	DIO_voidSetPinValue(STEPPER_PORT, 0 , DIO_u8LOW);
	        _delay_ms(2);
	        DIO_voidSetPinValue(STEPPER_PORT, 3 , DIO_u8LOW);
	        DIO_voidSetPinValue(STEPPER_PORT, 2 , DIO_u8LOW);
	        DIO_voidSetPinValue(STEPPER_PORT, 1 , DIO_u8HIGH);
	        DIO_voidSetPinValue(STEPPER_PORT, 0 , DIO_u8LOW);
	        _delay_ms(2);
	        DIO_voidSetPinValue(STEPPER_PORT, 3 , DIO_u8LOW);
	        DIO_voidSetPinValue(STEPPER_PORT, 2 , DIO_u8LOW);
	        DIO_voidSetPinValue(STEPPER_PORT, 1 , DIO_u8LOW);
	        DIO_voidSetPinValue(STEPPER_PORT, 0 , DIO_u8HIGH);
	        _delay_ms(2);
		}
	}
}
