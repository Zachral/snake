#include <time.h>
#include <stdlib.h>


int randomPlacement(randomMax){
    return (rand() % randomMax);
}

int randomFoodPosition(snakePlacement, randomMax){
   int food = randomPlacement(randomMax);
	while (food == snakePlacement)
		food = randomPlacement(randomMax);
    return food;  
	
}