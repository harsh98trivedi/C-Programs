// A program to check whether the alphabet that is input by thr user is a vowel or a consonant.
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter any Alphabet : ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("The alphabet that you've entered is a Vowel");
	}
	else
	{
		printf("The alphabet that you've entered is a consonant");
	}
}
