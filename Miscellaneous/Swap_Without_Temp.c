/* a program to take two integer inputs from the user and then store them in two different
variables and then swap the values of both the variables without using a third variable */
#include<stdio.h> // standard input output header file
#include<conio.h> //standard console input output header file
void main() // main function that returns a null value when printing the remainder
{ // opening block of the main function
	int n1,n2; // declaration of the variables
	printf("Enter the value for 'n1' : "); // print 'Enter the value for 'n1' : ' call for a user to input the number
	scanf("%d", &n1); // scan the value that is input by the user
	printf("Enter the value for 'n2' : "); // print 'Enter the value for 'n2' : ' call for a user to input the number
	scanf("%d", &n2); // scan the value that is input by the user
	n1=n1+n2; // overwriting 'n1' with the sum of 'n1' and 'n2'
	n2=n1-n2; // overwriting 'n2' with the difference between 'n1' and 'n2'
	n1=n1-n2; // overwriting 'n1' with the difference between 'n1' and 'n2'
	printf("Value of 'n1' is : %d\n",n1); // printing the value of n1
	printf("Value of 'n2' is : %d\n",n2);  // printing the value of n1
} // closing the main function
