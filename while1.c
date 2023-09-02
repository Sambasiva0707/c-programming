#include<stdio.h>
main()
{
	int rev=0,digit,num,n;
	printf("enter a number:");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	if(rev==num)
	{
		printf("give number is palindrome.");
		
	}
	else
	printf("give number is not palindrome.");
		
	
	
}
