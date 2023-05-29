#include <time.h>
#include <stdlib.h>

int randomPlacementX(){
    return (rand() % 8)  + 1;
}

int randomPlacementY(){
    return (rand() % 16)  + 1;
}