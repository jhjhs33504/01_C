#include <stdio.h>
#include <string.h>
struct person{
	char name[10];
	int age;
	float salary;
};
int main(void){
	struct person teacher;
	strcpy(teacher.name, "John");
	teacher.age=35;
	teacher.salary=54300.5f;

	printf("Name: %s\n", teacher.name);
	printf("Age: %d\n", teacher.age);
	printf("Salary: %10.2f\n", teacher.salary);
}



