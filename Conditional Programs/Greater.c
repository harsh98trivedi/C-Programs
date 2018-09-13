// A program to take 3 integer inputs from the user and print the greatest of all the numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter first number : ");
	scanf("%d",&n1);
	printf("Enter second number : ");
	scanf("%d",&n2);
	printf("Enter third number : ");
	scanf("%d",&n3);
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("%d is greater than %d & %d",n1,n2,n3);
		}
		else
		{
			printf("%d is greater than %d & %d",n3,n1,n2);
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("%d is greater than %d & %d",n2,n1,n3);
		}
		else
		{
			printf("%d is greater than %d & %d",n3,n1,n2);
		}
	}
}
