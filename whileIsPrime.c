#include <stdio.h>

int main(void){
	int i=2,count=0,num=0;

	printf("enter a number: \n");
	scanf("%d",&num);
	while(i<num){
		if(num%i==0){
			printf("%d is %d  multiple.\n",num,i);
			count++;
		}
		i++;
	}
	if(count==0)
		printf("%d is a prime.\n",num);
	else
		printf("%d is not a prime.\n",num);

	return 0;
}



