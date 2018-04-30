#include <stdio.h>
int main(void){
		int a=10;
		float f;
		double b, d;

		f = a;
		b= (double)a;
		d = a;

	printf("f=%f\n", f);
	printf("b=%lf\n", b);
	printf("d=%lf\n", d);
		return 0;
}
