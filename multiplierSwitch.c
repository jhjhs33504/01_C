#include <stdio.h>

int main (void){
	int a,b;
	printf("enter a:\n");
	scanf("%d",&a);
	printf("enter b:\n");
	scanf("%d",&b);
	switch(a%b){
		case 0: printf("a is multiplier b.\n");
			break;
		default: printf("a is not multiplier b.\n");
	}

	return 0;
}



