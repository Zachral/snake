#ifndef __SNAKE_MOVEMENT_H_
#define __SNAKE_MOVEMENT_H_

typedef enum {
    Snake_Up,
    Snake_down,
    Snake_left,
    Snake_right
} movement; 


int countiousMovementX(int lastX, int x);
int countiousMovementY(int lastY, int y); 


#endif