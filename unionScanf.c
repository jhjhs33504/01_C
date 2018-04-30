#include <stdio.h>
union money{
	int student;
	float teacher;
};

int main(void){
	union money john;
	printf("Enter student's money: \n");
	scanf("%d", &john.student);
	printf("The student's money is: %d\n", john.student);
	printf("Enter teacher's salary: \n");
	scanf("%f", &john.teacher);
	printf("The teacher's salary is: %10.2f\n", john.teacher);

	return 0;
}



