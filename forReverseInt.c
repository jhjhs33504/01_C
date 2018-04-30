#include <stdio.h>

int main (void){
	int num,i;
	printf("input number: \n");
	scanf("%d",&num);
	for(i=0;i<4;i++){
		printf("%d",num%10);
		num=num/10;
	}
	printf("\n");

	return 0;
}



