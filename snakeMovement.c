#include "snakeMovement.h"


movement snakeDirection(int lastX, int lastY, int snakeX, int snakeY, movement lastMove){
       if(snakeX > lastX) lastMove = Snake_right;
       else if(snakeX < lastX) lastMove = Snake_left; 
       else if(snakeY > lastY) lastMove = Snake_down;
       else if(snakeY < lastY) lastMove = Snake_Up; 
       else lastMove = lastMove; 

       return lastMove; 
}


