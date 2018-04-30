#include <stdio.h>
int main(void){
	int math[4][4]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,sum=0;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d, ", math[i][j]);
			sum = sum + math[i][j];
		}
		printf("%2d\n", sum);
		sum=0;
	}
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			sum = sum + math[i][j];
		}
		printf("%2d, ", sum);
		sum=0;
	}
	printf("%2d\n", math[0][0]+math[0][1]+math[0][2]+ math[1][0]+math[1][1]+math[1][2]+ math[2][0]+math[2][1]+math[2][2]);
}



