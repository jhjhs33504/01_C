#include <stdio.h>
#define MAX 4

int main(void){
	char str[MAX];
	int total=0;
	printf("enter operators: \n");
	scanf("%s",str);
	if(str[1]=='+')
		total=(str[0]-'0')+(str[2]-'0');
	else if(str[1]=='-')
		total=(str[0]-'0')-(str[2]-'0');
	else if(str[1]=='*')
		total=(str[0]-'0')*(str[2]-'0');
	else if(str[1]=='/')
		total=(str[0]-'0')/(str[2]-'0');
	printf("total = %d\n",total);

	return 0;
}


