#include <stdio.h>
#define MAX 4

int main(void){
	int num,i,tmp=0;
	printf("input 4 number: \n");
	scanf("%d",&num);
	for(i=0;i<MAX;i++){
		if(i<MAX-1){
			tmp=num%10;
			printf("%d",tmp);
			num=num/10;
		} else {
			tmp=num%10;
			printf("%d\n",tmp);
			num=num/10;
		}
	}

	return 0;
}



