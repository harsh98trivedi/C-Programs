// a program to print the reverse of a 4-digit number.
#include<stdio.h> // standard input output header file
#include<conio.h> //standard console input output header file
void main() // main function that returns a null value when printing the remainder
{ // opening block of the main function
	int num,d1,d2,d3,d4,sum; // declaration of the variables
	printf("Enter a number : "); // printing 'Enter a number : ' to tell the user to input a number
	scanf("%d",&num); // taking value from the user
	d1=num%10; // assigning remainder value to d1
	num=num/10; // overwriting quotient value to num
	d2=num%10; // assigning remainder value to d1
	num=num/10; // overwriting quotient value to num
	d3=num%10; // assigning remainder value to d1
	num=num/10; // overwriting quotient value to num
	d4=num%10; // assigning remainder value to d1
	num=num/10; // overwriting quotient value to num
	d1=d1*1000;
	d2=d2*100;
	d3=d3*10;
	d4=d4*1;
	sum=d1+d2+d3+d4;
	printf("Reverse of the number is %d",sum);
}
