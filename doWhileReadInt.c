#include <stdio.h>
#define MAX 100

int main(void){
	char c[MAX];
	int i=0,tmp;
	printf("enter a character: \n");
	scanf("%s",c);
	do{
		tmp=(int)c[i];
		tmp=tmp-48;
		if(tmp>=0 && tmp<=9){
			printf("%d",tmp);
			i++;
		} else{
			printf("\n");
			break;
		};
	}while(tmp>9 || i<MAX);

	return 0;
}



