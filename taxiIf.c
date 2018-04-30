#include <stdio.h>

int main(void){
	int meter=0;
	int money=70;
	printf("input meters: \n");
	scanf("%d",&meter);
	if(meter<0)
		printf("error.\n");
	else if(meter<1500)
		printf("taxi fee: %d\n",money);
	else {
		money+=5*(((meter-1500)/500)+1);
		printf("taxi fee: %d\n",money);
	}

	return 0;	
}


