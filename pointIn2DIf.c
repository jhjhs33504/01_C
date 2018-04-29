#include <stdio.h>

int main(void){
	float x,y;

	printf("input point in 2D (e.g. x,y): \n");
	scanf("%f,%f",&x,&y);
	if(x>0 && y>0)
		printf("I\n");
	else if(x<0 && y>0)
		printf("II\n");
	else if(x<0 && y<0)
		printf("III\n");
	else if(x>0 && y<0)
		printf("IV\n");
	else
		printf("Axis\n");

	return 0;
}



