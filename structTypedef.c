#include <stdio.h>
#include <string.h>
int main(void){
	typedef struct {
		char name[10];
		int age;
		float salary;
	} Person;
	Person teacher[3];
	strcpy(teacher[0].name, "John");
	teacher[0].age=35;
	teacher[0].salary=54300.5;

	strcpy(teacher[1].name, "Tom");
	teacher[1].age=33;
	teacher[1].salary=66600.8;

	strcpy(teacher[2].name, "Mary");
	teacher[2].age=30;
	teacher[2].salary=45600.2;

	printf("Number 0 =>Name: %s, Age: %d, Salary: %10.2f\n", teacher[0].name, teacher[0].age, teacher[0].salary);
	printf("Number 1 =>Name: %s, Age: %d, Salary: %10.2f\n", teacher[1].name, teacher[1].age, teacher[1].salary);
	printf("Number 2 =>Name: %s, Age: %d, Salary: %10.2f\n", teacher[2].name, teacher[2].age, teacher[2].salary);
	return 0;
}


