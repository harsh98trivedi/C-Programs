// A program to print Sum and Average of n number of elements in an Array.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sum,avg,i,n[i]; // Declaring Variables Here
	printf("Enter Number of Elements to be Entered : "); // User Input Statement Goes Here
	scanf("%d",&a); // Taking the range of Array i.e, number of elements that will be stored in that Array
	printf("Enter Elements :\n"); // User Input Statement to take Input from the user.
	for(i=0;i<a;i++) // Initiating a loop that runs until its conditional variable is not equal to it.
	{
		scanf("%d",&n[i]); // Taking elements as an input for the values in an Array.
		sum=sum+n[i]; // Updating the value of sum each time loop runs.
	}
	avg=sum/a; // Simple formula to calculate Average.
	printf("Sum = %d\n",sum); // Printing Sum
	printf("Average = %d",avg); // Printing Average
}
