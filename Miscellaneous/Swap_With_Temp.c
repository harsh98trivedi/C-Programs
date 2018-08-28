/* a program to take two integer inputs from the user and then store them in two different
variables and then swap the values of both the variables using a third variable */
#include<stdio.h> // standard input output header file
#include<conio.h> //standard console input output header file
void main() // main function that returns a null value when printing the remainder
{ // opening block of the main function
	int n1,n2,temp; // declaration of the variables
	printf("Enter the value for 'n1' : "); // print 'Enter the value for 'n1' : ' call for a user to input the number
	scanf("%d", &n1); // scan the value that is input by the user
	printf("Enter the value for 'n2' : "); // print 'Enter the value for 'n2' : ' call for a user to input the number
	scanf("%d", &n2); // scan the value that is input by the user
	temp=n1; // storing the value of 'n1' in the variable named temp
	n1=n2; // overwriting the value stored in 'n1' with the value of 'n2'
	n2=temp; // overwriting the value stored in 'n2' with the value of 'temp' that is the value of n1
	printf("Value of 'n1' is : %d\n",n1); // printing the value of n1
	printf("Value of 'n2' is : %d\n",n2);  // printing the value of n1
} // closing the main function
