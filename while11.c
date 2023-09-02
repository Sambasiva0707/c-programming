#include<stdio.h>
main()
{
	int num,i=1;
	printf("enter number:");
	scanf("%i",&num);
	while(i<=num)
	{
		printf("%i  ",i);
		i=i+2;
	}
}
