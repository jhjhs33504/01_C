#include <stdio.h>
struct person{
	char name[10];
	int age;
	float salary;
};
int main(void){
	struct person teacher;
	printf("enter name: ");
	scanf("%s",teacher.name);
	printf("enter age: ");
	scanf("%d",&teacher.age);
	printf("enter salary: ");
	scanf("%f",&teacher.salary);

	printf("Name: %s\n", teacher.name);
	printf("Age: %d\n", teacher.age);
	printf("Salary: %10.2f\n", teacher.salary);

	return 0;
}



