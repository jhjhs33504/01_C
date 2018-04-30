#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int num=0,x;
	srand(time(NULL));
	num=(rand()%100)+1;
	printf("guess a num: \n");
	do{
		scanf("%d",&x);
		if(x>num)
			printf("more lower\n");
		else if(x<num)
			printf("more higher\n");
		else if(x==num)
			printf("yes\n");
	}while(x!=num);

	return 0;
}
