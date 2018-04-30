#include <stdio.h>

int main(void){
	int i = 1, sum = 0;
	int num[10];

	while(i <= 10){
		num[i - 1] = i;
		int j = 1;
		while(j <= i){
			sum++;
			if(j == 1 && i == 1)
				printf("%d = %d", j, sum);
			else if(j == 1)
				printf("%d", j);
			else if(j == i)
				printf(" + %d = %d", j, sum);
			else
				printf(" + %d", j);
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}


