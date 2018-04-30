#include <stdio.h>
#include <string.h>
int main(void){
	struct person{
		char name[10];
		int age;
		float salary;
	};
	int i;
	struct person teacher[3];
	strcpy(teacher[0].name, "John");
	teacher[0].age=35;
	teacher[0].salary=54300.5;

	strcpy(teacher[1].name, "Tom");
	teacher[1].age=33;
	teacher[1].salary=66600.8;

	strcpy(teacher[2].name, "Mary");
	teacher[2].age=30;
	teacher[2].salary=45600.2;

	for(i=0;i<3;i++){
		printf("Number %d =>Name: %s, Age: %d, Salary: %10.2f\n", i, teacher[i].name, teacher[i].age, teacher[i].salary);
	}
	return 0;
}


