#include <stdio.h>

int main(void){
	int i=1;
	do{
		if(!(i%3==0))
			printf("%d\n",i);
		i++;
	} while(i<=100);

	return 0;
}



