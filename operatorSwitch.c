#include <stdio.h>
#define MAX 4

int main(void){
	char str[MAX];
	int total=0;
	printf("enter operators: \n");
	scanf("%s",str);
	switch(str[1]){
		case '+':
			total=(str[0]-'0')+(str[2]-'0');
			break;
		case '-':
			total=(str[0]-'0')-(str[2]-'0');
			break;
		case '*':
			total=(str[0]-'0')*(str[2]-'0');
			break;
		case '/':
			total=(str[0]-'0')/(str[2]-'0');
			break;
	}
	printf("total = %d\n",total);

	return 0;
}


