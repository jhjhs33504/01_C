#include <stdio.h>

int main(void){
	int points;

	printf("input score: \n");
	scanf("%d",&points);	
	if(points>=90 && points<=100)
		printf("A\n");
	else if(points>=80 && points<=89)
		printf("B\n");
	else if(points>=70 && points<=79)
		printf("C\n");
	else if(points>=60 && points<=69)
		printf("D\n");
	else
		printf("E\n");

	return 0;
}



