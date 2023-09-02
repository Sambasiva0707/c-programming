#include<stdio.h>
void main()
{
	printf("%d",fact(5));
}
int fact(n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
	
}
