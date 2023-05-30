#include "snakeMovement.h"

movement lastMove; 
int countiousMovementX(int lastX, int x){
       if(x > lastX){
        lastMove = Snake_right;
        return x + 1;
       }else if(x < lastX){
        lastMove = Snake_left; 
        return x - 1;
       }else if (lastMove == Snake_right){ 
        return x + 1;
       }else if (lastMove == Snake_left){ 
        return x - 1;  
       }
}

int countiousMovementY(int lastY, int y){
        if(y > lastY){
            lastMove = Snake_down;
            return y + 1;
       }else if(y < lastY){
            lastMove = Snake_Up; 
            return y - 1;
       }else if(lastMove == Snake_down){
            return y + 1; 
       }else if(lastMove == Snake_Up){
            return y - 1;  
       }
}