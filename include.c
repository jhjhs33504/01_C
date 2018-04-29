#include <stdio.h>
#include 'const.h'

int main(void){
	#if VALUE < 100
		printf("VALUE < 100\n");
	#else
		printf("VALUE >= 100\n");
	#endif
}
