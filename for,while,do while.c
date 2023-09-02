#include<stdio.h>
int a=1,b=1,c=1;
void samba()
{
		printf("\n\n*****Printing 1 to 100 numbers by using while loop:*****\n");
		while(b<=100)
	{
		printf("%d  ",b);
		b++;
	}
}
void bhaskar()
{
	printf("\n\n*****Printing 1 to 100 numbers by using  do while loop:*****\n");
	do
	{
		printf("%d  ",c);
		c++;
	}
	while(c<=100);
}

void main()
{
printf("\n*****Printing 1 to 100 numbers by using for loop:*****\n");
		for(a=1;a<=100;a++)
		{
		printf("%d  ",a);
     	}	
		samba();
        bhaskar();
}


