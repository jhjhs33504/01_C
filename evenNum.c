#include <stdio.h>
int main(void){
	int num[5];

	int i,j;
	for(i=0;i<5;i++){
		printf("enter num[%d]:\n",i);
		scanf("%d",&num[i]);
	}
	for(j=0;j<5;j=j+2){		
		printf("num[%d]=%d \n",j,num[j]);
	}

	return 0;
}


