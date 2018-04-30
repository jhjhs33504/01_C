#include <stdio.h>

int main (void){
	int a,b;
	printf("enter a:\n");
	scanf("%d",&a);
	printf("enter b:\n");
	scanf("%d",&b);
	if(a%b==0)
		printf("a is multiplier b.\n");
	else
		printf("a is not multiplier b.\n");
	return 0;
}



