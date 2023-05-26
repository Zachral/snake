#ifndef __JOYSTICK_H_
#define __JOYSTICK_H_

#include <avr/io.h>
#include "max72xx.h"

int joystickXAxis(int horz, int x); 
int joystickYAxis(int vert, int y); 

#endif