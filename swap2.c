#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the numbers:");
	scanf("%d %d",&a,&b);
	printf("\nbefore swapping is %d and %d",a,b);
	swap(a,b);
}
void swap(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nafter swapping is %d and %d",x,y);
}
