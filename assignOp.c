#include <stdio.h>
int main(void){
	int a=15;
	int b=10;
	printf("a+=b, a=%d\n", a+=b);
	printf("a-=b, a=%d\n", a-=b);
	printf("a*=b, a=%d\n", a*=b);
	printf("a/=b, a=%d\n", a/=b);
	printf("a*=b+10, a=%d\n", a*=b+10);
}
