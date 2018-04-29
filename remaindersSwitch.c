#include <stdio.h>

int main(void){
	int num;
	printf("input a number: \n");
	scanf("%d",&num);
	switch(num%3){
		case 0: printf("zero\n");
			break;
		case 1: printf("one\n");
			break;
		case 2: printf("two\n");
			break;
	}

	return 0;
}



