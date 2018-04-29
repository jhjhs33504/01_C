#include <stdio.h>
int main(void){
	int a=29;
	int b=0x000F;
	printf("a&b=%d=0x%x\n",a&b, a&b);
	printf("a|b=%d=0x%x\n",a|b, a|b);
	printf("a^b=%d=0x%x\n",a^b, a^b);
	printf("~a=%d=0x%x\n",~a, ~a);
}
