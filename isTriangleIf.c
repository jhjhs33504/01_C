#include <stdio.h>

int main(void){
	int a,b,c;
	printf("enter a: \n");
	scanf("%d",&a);
	printf("enter b: \n");
	scanf("%d",&b);
	printf("enter c: \n");
	scanf("%d",&c);
	if(!(a>0 && b>0 && c>0))
		printf("Error!\n");
	else if((a*a)+(b*b)<(c*c))
		printf("This is not a Triangle.\n");
	else
		printf("This is a Triangle.\n");

	return 0;
}


