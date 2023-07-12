#ifndef __SNAKE_MOVEMENT_H_
#define __SNAKE_MOVEMENT_H_

typedef enum {
    Snake_Up,
    Snake_down,
    Snake_left,
    Snake_right
} movement; 

movement snakeDirection(int lastX, int lastY, int x, int y, movement lastMove); 
#endif