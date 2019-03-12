// A program to convert numbers from Decimal to Binary.
#include<stdio.h>
void main()
{
	int no, var, re, binary=0, i=1;
	printf("Enter a Decimal number: ");
	scanf("%d",&no);
	var=no;
	while(no!=0)
	{
		re=no%2;
		no=no/2;
		binary=binary+(re*i);
		i=i*10;
	}
	printf("%d in Binary is %d",var,binary);
}
