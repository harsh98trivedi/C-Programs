// A program to check if the 4 digit number input by the user is a Palindrome or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,d1,d2,d3,d4,temp;
	printf("Enter a 4 digit number : ");
	scanf("%d",&n);
	temp=n; //Storing value of n in temp to check afterwards
	// Using simple remainder and quotient method to fetch all the 4 digits from the number
	d1=n%10;
	n=n/10;
	d2=n%10;
	n=n/10;
	d3=n%10;
	n=n/10;
	d4=n%10;
	// number fetching ends here.
	// reversing the number
	d1=d1*1000;
	d2=d2*100;
	d3=d3*10;
	n=d1+d2+d3+d4; // Overwriting the value of n
	// reversing ends here
	if(temp==n) // condition to check if the number is palindrome or not.
	{
		printf("The number you've entered is a Palindrome");
	}
	else
	{
		printf("The number you've entered is not a Palindrome");
	}
}
