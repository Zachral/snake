#include "joystick.h"

#define min(X,Y) ((X) < (Y) ? (X) : (Y))
#define max(X,Y) ((X) > (Y) ? (X) : (Y))

int joystickXAxis(int horz, int x){
	int maxX = 16;
	if (horz < 700) {
		x = min(x + 1, maxX);
	}
	if (horz > 300) {
		x = max(x - 1, 0);
	}
	return x; 
}

int joystickYAxis(int vert, int y){
	int maxY = 8;
    if (vert < 300) {
		y = min(y + 1, maxY);
	}
	if (vert > 700) {
		y = max(y - 1, 0);
	}
	return y; 
}