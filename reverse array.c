#include<stdio.h>
void main()
{
	int a[100];
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reverse elements are :");
		for(i=n-1;i>n;i--)
		{
		printf("a[%d]",a[i]);	
		}
	
}
