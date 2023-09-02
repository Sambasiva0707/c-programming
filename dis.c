#include<stdio.h>
main()
{
	int year,leap_year;
	printf("enter a year:");
	scanf("%d",&year);
	leap_year=(year%100!=0 && year%4==0)?printf("it is leap year"):printf("it is not leap year");
}
	
