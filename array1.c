#include <stdio.h>

int main(void){
	int list[8] = {100, 200, 300, 400, 500, 600, 700, 800};
	int i;

	for(i=0;i<8;i++){
		printf("list[%d]=%d, &list[%d] = %p\n", i, list[i], i, &list[i]);
	}
}
