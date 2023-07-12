#include "snakeMovement.h"


movement snakeDirection(int lastX, int lastY, int x, int y, movement lastMove){
       if(x > lastX) lastMove = Snake_right;
       else if(x < lastX) lastMove = Snake_left; 
       else if(y > lastY) lastMove = Snake_down;
       else if(y < lastY) lastMove = Snake_Up; 
       else lastMove = lastMove; 

       return lastMove; 
}


