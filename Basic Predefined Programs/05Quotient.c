// a program to divide 2 predefined integer values and print the output
#include<stdio.h> // standard input output header file
#include<conio.h> //standard console input output header file
void main() // main function that returns a null value
{ // opening block of the main function
	int num1, num2, quotient; // declaration of the variables
	num1 = 10; // assigning value to the variable 'num1'
	num2 = 5; // assigning value to the variable 'num2'
	quotient = num1 / num2; // dividing 'num1' & 'num2' & storing the quotient into the variable named as 'quotient'
	printf("%d",quotient); // print statemnt, which includes integer data type specifier i.e '%d'
}
