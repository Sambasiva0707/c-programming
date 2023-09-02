#include<stdio.h>
void samba()
{
	printf("\n\n****printing 5th table by using while loop****\n");
	int i;
	i=1;
	while(i<=20)
	{
		printf("5*%d=%d\n",i,5*i);
		i++;
	}
}
void bhaskar()
{
		printf("\n\n****printing 5th table by using do while loop****\n");
		int num;
	num=1;
	do
	{
		printf("5*%d=%d\n",num,5*num);
		num++;
	}
   while(num<=20);
}
void main()
{
	printf("\n****printing 5th table by using for loop****\n");
	int j;
	for(j=1;j<=20;j++)
	{
		printf("5*%d=%d\n",j,5*j);
	}
	samba();
	bhaskar();
}
