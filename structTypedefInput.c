#include <stdio.h>
#include <string.h>
int main(void){
	typedef struct {
		char name[10];
		int age;
		float salary;
	} Person;
	int i,j;
	Person teacher[3];
	for(i=0;i<3;i++){
		printf("enter Name: \n");
		scanf("%s", &teacher[i].name);
		printf("enter Age: \n");
		scanf("%d", &teacher[i].age);
		printf("enter salary: \n");
		scanf("%f", &teacher[i].salary);
	}

	for(j=0;j<3;j++){
		printf("Number %d =>Name: %s, Age: %d, Salary: %10.2f\n", j, teacher[j].name, teacher[j].age, teacher[j].salary);
	}
	return 0;
}


