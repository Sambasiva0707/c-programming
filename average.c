#include<stdio.h>
void main()
{
	int annual_salary;
	float average_salary;
	printf("enter a annual salary:");
	scanf("%d",&annual_salary);
	average_salary=annual_salary/12;
	printf("average monthly salary is %f",average_salary);
}
