#include <stdio.h>

int main(void){
	int i,count=0,num;

	printf("enter a number: \n");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==0)
		printf("%d is a prime.\n",num);
	else
		printf("%d is not a prime.\n",num);

	return 0;
}



