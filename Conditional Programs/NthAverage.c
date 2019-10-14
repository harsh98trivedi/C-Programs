// A program to input n number of inputs and print sum and average of those numbers.
#include<stdio.h> // Including Standard Input/Output Header File
#include<conio.h> // Including Console Input/Output Header File
void main() // Defining Main Function
{
	int n,avg,t,sum=0,num; // Variable declaration
	system("Color E"); // Changing Color of CMD Text, Works only on Windows.
	printf("Enter how many numbers are there \nto take the average of, \nor Enter '0' to exit. \n> ");
	scanf("%d",&t); // Taking Input to Divide further in Average Formula that is sum(n)/n.
	printf("----------"); // Printing Lines to divide area.
	printf("\n"); // Blank Line
	system("cls"); // Clearing screen text using 'CLS', a CMD command.
	if(t!=0)
	{
		for(n=0;n<t;n++) // for loop to take input and calculate again and again.
		{
			system("Color B"); // Changing Color of CMD Text, Works only on Windows.
			printf("Enter Number \n:"); // Taking input for multiple values.
			scanf("%d",&num); // storing values to num variable
			sum=sum+num; // Calculating sum on each updation.
			avg=sum/t; // Calculating average on each updation.
		}
		system("cls"); // Clearing screen text using 'CLS', a CMD command.
		system("Color A"); // Changing Color of CMD Text, Works only on Windows.
		printf("----------"); // Printing Lines to divide area.
		printf("\n"); // Blank Line
		printf("Sum of the numbers input \n: %d",sum); // Printing Sum.
		printf("\n"); // Blank Line
		printf("----------"); // Printing Lines to divide area.
		printf("\n"); // Blank Line
		printf("Average of the numbers input \n: %d",avg); // Printing Average.
	}
	else if(t==0)
	{
		printf("Exit");
		system("exit");
	}
}
