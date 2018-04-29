#include <stdio.h>

int main(void){
	int i=1;
	char j;
	int count=0;
	while(i){
		scanf("%c",&j);
		switch(j){
			case 'A':
			case 'a': count++;
				break;
			case 'E':
			case 'e': count++;
				break;
			case 'I':
			case 'i': count++;
				break;
			case 'O':
			case 'o': count++;
				break;
			case 'U':
			case 'u': count++;
				break;
			case '#': i=0;
				printf("%d\n",count);
				break;
		}
	}

	return 0;
}
