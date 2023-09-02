#include<stdio.h>
void main()
{
	int j;
	int a[100];
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered elements are :");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
}
}
