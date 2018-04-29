#include <stdio.h>
#define PI 3.14159

int main(void){
	double radius;
	//const double PI=3.14159;
	double Area,circumference;

	printf("radius:");
	scanf("%lf",&radius);
	Area=2*PI*radius;
	circumference=PI*radius*radius;
	
	printf("Area=%lf \ncircumference=%lf\n", Area, circumference);

	return 0;
}


