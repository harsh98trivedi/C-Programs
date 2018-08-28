// a program to take an integer input from the user and tell the user that if the number is even or odd
#include<stdio.h> // standard input output header file
#include<conio.h> //standard console input output header file
void main() // main function that returns a null value when printing the remainder
{ // opening block of the main function
	int num; // declaration of the variables
	printf("Enter a number : "); // print 'Enter a number : ' call for a user to input the number
	scanf("%d",&num); // scan the value that is input by the user
	if(num%2==0) // applying condition to check if the remainder comes 0 after dividing the number by 2
	{ // opening conditional brace
		printf("Number is even."); // print command to tell that the number is even
	} // closing conditional brace
	else // else condition
	{ // opening conditional brace
		printf("Number is odd."); // print command to tell that the number is odd
	} // closing conditional brace
} // closing block of the main function
