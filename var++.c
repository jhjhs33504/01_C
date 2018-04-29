#include <stdio.h>
int main(void){
	int a=5;
	int b=a++;
	int c=a--;
	int d=++a;
	int e=--a;
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	printf("e=%d\n",e);
}
