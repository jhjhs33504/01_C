#include <stdio.h>

int main(void){
	int year;
	printf("enter year: \n");
	scanf("%d",&year);
	if(year%400==0 || (year%4==0 && year%100!=0))
		printf("%d is leap\n",year);
	else
		printf("%d is not leap\n",year);

	return 0;
}



