/*
 * motor.h
 *
 * Created: 1/07/2014 4:52:05 p.m.
 *  Author: martin
 */ 


#ifndef MOTOR_H_
#define MOTOR_H_

#include "system.h"

#define MOTOR_LEFT 0
#define MOTOR_RIGHT 1
#define MOTOR_FWD 2
#define MOTOR_RVSE 3

/** Initialize motor PWM timers
	@param none
	@return none */
void motor_init(void);


/** Control each motor from -255 to +255.
	@param left_speed
	@param right_speed */
void motor_set(short left_speed, short right_speed);

/** calls motor_set and sets each motor speed
	to zero.
	@param none
	@return none */
void motor_stop(void);

/** Simple test program that pulses the PWM
    channels so that it is obvious if it works.
	An LED is on PB6 for debugging.
	@param none
	@return none */
void motor_test(void);

/** Control a motor from -255 to +255.
	@param motor
	@param duty 
	@param direction */
void motor_set_one(byte motor, byte duty, byte direction);


#endif /* MOTOR_H_ */