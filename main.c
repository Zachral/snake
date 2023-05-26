#include "max72xx.h"
#include "analogRead.h"
#include <stdio.h>
#include <string.h>
#include <util/delay.h>
#include "uart.h"

#define VERT_PIN 0
#define HORZ_PIN 1
#define SEL_PIN  2

#define BIT_SET(a, b) ((a) |= (1ULL << (b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1ULL<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1ULL<<(b)))
#define BIT_CHECK(a,b) (!!((a) & (1ULL<<(b)))) 

#define BUTTON_IS_CLICKED(PINB,BUTTON_PIN) !BIT_CHECK(PINB,BUTTON_PIN)

#define min(X,Y) ((X) < (Y) ? (X) : (Y))
#define max(X,Y) ((X) > (Y) ? (X) : (Y))
// Hej

//// https://wokwi.com/projects/296234816685212169


int main()
{
	BIT_CLEAR(DDRC,VERT_PIN);
	BIT_CLEAR(DDRC,HORZ_PIN);

	  //Sätt till INPUT_PULLUP
    BIT_CLEAR(DDRD,SEL_PIN); // INPUT MODE
    BIT_SET(PORTD,SEL_PIN); 

	init_serial();
	max7219_init();
	int x = 0;
	int y = 0;
	int maxX = 16;
	int maxY = 8;
	while (1) {
		int horz = analogRead(HORZ_PIN);
  		int vert = analogRead(VERT_PIN);
		if (vert < 300) {
			y = min(y + 1, maxY);
			printf("y:%d\n", y);
		}
		if (vert > 700) {
			y = max(y - 1, 0);
			printf("y:%d\n", y);
		}
		if (horz > 700) {
			x = min(x + 1, maxX);
			printf("x:%d\n", x);
		}
		if (horz < 300) {
			x = max(x - 1, 0);
			printf("x:%d\n", x);
		}
		if (BUTTON_IS_CLICKED(PIND,SEL_PIN)) {
			printf("CLICK\n");
		}
		//Turns the wrong direktion. 
		max7219b_set(x, y);
		max7219b_out();
		_delay_ms(100);

		//Snake moving constantly left. 
		// for(int i = 0; i < 16;i++){
		// 	printf("%d\n", i);
		// 	max7219b_set(i, y);
		// 	max7219b_out();
		// 		_delay_ms(1000);
		// }
	}
	return 0;
}