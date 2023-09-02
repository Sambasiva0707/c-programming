#include<stdio.h>
main(){
	int i=1,sum=0,n;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of n natural number is %d",sum);
}

