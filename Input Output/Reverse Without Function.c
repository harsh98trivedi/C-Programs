#include <stdio.h>
#include <conio.h>

void main()
{
	// Declaring Variables
	int l=0,i;
	char *p;
	char ch[20];
	printf("Enter the String\n");
	gets(ch);
	p= &ch[0];
	while(*p!='\0') // Looping
	{
		p++; // Counter
		l++; // Counter
	}
	printf("The String in reverse form\n"); // Printing Reverse of the String
	for(i=l-1;i>=0;i--) // Looping for Printing Each Character in reverse order.
	{
		printf("%c",ch[i]); // Reverse String
	}
	getch();
}
