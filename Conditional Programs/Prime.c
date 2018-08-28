// a program to take an integer input from the user and tell the user that if the number is prime or not
#include<stdio.h> // standard input output header file
#include<conio.h> //standard console input output header file
void main() // main function that returns a null value when printing the remainder
{ // opening block of the main function
	int num,i,c=0; // declaration of the variables
	printf("Enter a number : "); // print 'Enter a number : ' call for a user to input the number
	scanf("%d", &num); // scan the value that is input by the user
	for(i=1;i<=num;i++) // loop to divide the number as many times as its own value
	if(num%i==0) // applying condition to check if the remainder comes 0 after dividing the number as many times as its own value
	{ // opening conditional brace
		c++; // increase count 
	} // closing conditional brace
	if(c<=2) // applying condition to check if the count of c increases more than 2 times or not
	{ // opening conditional brace
		printf("Prime"); // printing "Prime"
	} // closing conditional brace
	else // condition alternative
	{ // opening conditional brace
		printf("Not Prime"); // printing "Not Prime"
	} // closing conditional brace
} // closing main function
