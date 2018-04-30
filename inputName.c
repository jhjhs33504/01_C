#include <stdio.h>
#define MAX 100

int main(void){
	char x[MAX];
	int y;
	printf("input name:");
	scanf("%s", x);
	printf("name:%s\n", x);
	printf("input age:");
	scanf("%d", &y);
	printf("name:%d\n", y);

	return 0;
}


