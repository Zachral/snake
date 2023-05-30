#ifndef __JOYSTICK_H_
#define __JOYSTICK_H_

#include <avr/io.h>
#include "max72xx.h"
#define X_AXIS_MAX 15
#define Y_AXIS_MAX 7

int joystickXAxis(int horz, int x); 
int joystickYAxis(int vert, int y); 

#endif