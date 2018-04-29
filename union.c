#include <stdio.h>
union money{
	int student;
	float teacher;
};

int main(void){
	union money john;
	john.student=12000;
	printf("The student's money is: %d\n", john.student);
	john.teacher=54300.5f;
	printf("The teacher's salary is: %10.2f\n", john.teacher);

	return;
}



