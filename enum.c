#include <stdio.h>
int main(void){
	enum color{
		white,
		red,
		blue,
		green,
		black
	};
	enum color ball;
	ball=white;
	printf("The color of ball is: %d\n", ball);
	ball=green;
	printf("The color of ball is: %d\n", ball);

	return 0;
}



