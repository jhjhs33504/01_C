#include <stdio.h>

int main(void){
	int radius=10;
	const double PI=3.14159;
	double Area,circumference;
	Area=2*PI*radius;
	circumference=PI*radius*radius;
	
	printf("Area=%lf \ncircumference=%lf\n", Area, circumference);

	return 0;
}


