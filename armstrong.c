#include<stdio.h>
void main()
{
	int n,num,digit,rev=0;
	printf("enter a number:");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		digit=n%10;
		rev=rev+(digit*digit*digit);
		n=n/10;
	}
	if(num==rev)
	printf("armstrong");
	else
	printf("not armstrong");
}
