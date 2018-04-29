#include <stdio.h>
int main(void){
	int a=5;
	int b=10;
	int c;
	if(a==b || a>b)
		printf("a>=b\n");
	if(a>0 && b>0)
		printf("%d>0, %d>0\n", a, b);
	b=b-20;
	if(!a)
		printf("a=%d\n",a);
	if(b)
		printf("b=%d\n",b);
}
