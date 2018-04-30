#include <stdio.h>
int main(void){
	int x, y;
	printf("Please enter a number:");
	scanf("%d", &x);
	y = x + 10;
	printf("%d + 10 = %d\n", x, y);
}
