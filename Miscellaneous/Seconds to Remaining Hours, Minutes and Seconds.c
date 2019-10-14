// A program to take input in seconds and print the output in remaining hours, remaining minutes and remaining seconds.
#include<stdio.h>
#include<conio.h>
void main()
{
	int sec=0,min=0,hour=0;
	printf("Enter the number of seconds : "); // Printin message to take input from the user.
	scanf("%d",&sec); // Scanning the input.
	if(sec>=60)
	{
		min=sec/60;
		sec=sec%60;
		printf("Hours : %d\n",hour);
		printf("Minutes : %d\n",min);
		printf("Seconds : %d\n",sec);
	}
}
