#include <stdio.h>

int main(void){
	int i, j;
	for(i = 0; i <= 9; i++){
		for(j = 0; j <= 9; j++){
			if(i == 0 && j ==  0)
				printf("    ");
			else if(i == 0 && j > 0)
				printf("%4d", j);
			else if(i > 0 && j == 0)
				printf("%4d", i);
			else
				printf("%4d", i * j);
		}
		printf("\n");
	}

	return 0;
}


