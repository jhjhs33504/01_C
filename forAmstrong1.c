#include <stdio.h>

int main(void){
	int i;
	for(i=100;i<=999;i++){
		int j=(i/100)*(i/100)*(i/100);
		int k=((i%100)/10)*((i%100)/10)*((i%100)/10);
		int l=((i%100)%10)*((i%100)%10)*((i%100)%10);
		if(i==(j+k+l))
			printf("%3d\n",i);
	}

	return 0;
}



