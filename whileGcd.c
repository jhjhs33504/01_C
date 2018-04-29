#include <stdio.h>

int main(void){
	int i,j,tmp;
	printf("input first number: \n");
	scanf("%d", &i);
	printf("input second number: \n");
	scanf("%d", &j);
	while(i!=j){
		if(j>i){
			j = j - i;
		}else {
			i = i - j;
		}
	}
	printf("GCD = %d\n", i);

	return 0;
}


