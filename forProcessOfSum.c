#include <stdio.h>

int main(void){
	int i, sum = 0;
	int num[10];

	for(i = 1; i <= 10; i++){
		num[i - 1] = i;
		int j;
		for(j = 1; j <= i; j++){
			sum++;
			if(j == 1 && i == 1)
				printf("%d = %d", j, sum);
			else if(j == 1)
				printf("%d", j);
			else if(j == i)
				printf(" + %d = %d", j, sum);
			else
				printf(" + %d", j);
		}
		printf("\n");
	}

	return 0;
}


