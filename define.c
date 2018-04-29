#include <stdio.h>
#define VALUE 99

int main(void){
	#if VALUE < 100
		printf("value < 100");
	#else
		printf("value >= 100");
	#endif
}
