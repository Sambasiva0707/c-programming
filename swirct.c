#include<stdio.h>
main(){
	char operator;
	int a,b;
	printf("enter 2 numbers:");
	scanf("%d %d",&a,&b);
	if(getchar()!='\n');
	{
	printf("enter a operator:");
	scanf("%c",&operator);}
	switch(operator)
	case '+':
		{
		
		{
		printf("sum of 2 numbers is %d",a+b);
		break;
	}
	case '-':
		{
		printf("sum of 2 numbers is %d",a-b);
		break;
	}
	case '*':
		{
		printf("multiplication of 2 numbers is %d",a*b);
		break;
	}
		case '/':
			{
		printf ("div of 2 numbers is %d",a/b);
		break;
	}
		case '%':
		printf("mod of 2 numbers is %d",a%b);
		break;
	
		default:
			printf("enter correct operator");
		}
}
