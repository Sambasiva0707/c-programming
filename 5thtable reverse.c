#include<stdio.h>
void samba()
{
	printf("\n\n****printing 5th table by using while loop****\n");
	int i;
	i=20;
	while(i>=1)
	{
		printf("5*%d=%d\n",i,5*i);
		i--;
	}
}
void bhaskar()
{
		printf("\n\n****printing 5th table by using do while loop****\n");
		int num;
	num=20;
	do
	{
		printf("5*%d=%d\n",num,5*num);
		num--;
	}
   while(num>=1);
}
void main()
{
	printf("\n****printing 5th table by using for loop****\n");
	int j;
	for(j=20;j>=1;j--)
	{
		printf("5*%d=%d\n",j,5*j);
	}
	samba();
	bhaskar();
}

