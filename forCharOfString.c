#include <stdio.h>
#define MAX 5

int main(void){
	char str[MAX];
	int i,j;

	printf("enter string:\n");

	scanf("%s",str);

	for(i=0;i<MAX;i++){
		printf("%c\n",str[i]);
	}

	return 0;
}


