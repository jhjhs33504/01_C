#include <stdio.h>
int main(void){
	int list[2][4] = {{100, 200, 300, 400},
					{500, 600, 700, 800}};
	int i, j;
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("list[%d][%d]=%d, &list[%d][%d] = %p\n", i, j, list[i][j], i, j, &list[i][j]);
		}
	}
}
