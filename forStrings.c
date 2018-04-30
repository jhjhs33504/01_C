#include <stdio.h>
#define MAX 100

int main(void){
	char str[3][MAX];
	int i;

	printf("enter 3 string:\n");
	for(i=0;i<3;i++){
		scanf("%s",str[i]);
	}
	for(i=0;i<3;i++){
		printf("%s\n",str[i]);
	}

	return 0;
}


